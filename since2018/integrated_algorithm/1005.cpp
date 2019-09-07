#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int i,j;
		int count[1001]={0};
		vector<int>ganseon[1001];
		int time[1001]={0};
		for(i=1;i<=n;i++){
			scanf("%d",&time[i]);
		}
		for(i=0;i<k;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			count[b]++;
			ganseon[a].push_back(b);
		}
		int w;
		scanf("%d",&w);
		queue<pair<pair<int,int>,int > >zero;
		for(i=1;i<=n;i++){
			if(count[i]==0){
				zero.push(make_pair(make_pair(i,0),i));
			}
		}
		vector<pair<int,int> >ans[1001];
		while(!zero.empty()){
			printf("%d %d\n",zero.front().first.first,zero.front().first.second);
			int len=ganseon[zero.front().first.first].size();
			for(j=0;j<len;j++){
				count[ganseon[zero.front().first.first][j]]--;
				int check=0;
				int size=ans[ganseon[zero.front().first.first][j]].size();
				for(i=0;i<size;i++){
					if(ans[ganseon[zero.front().first.first][j]][i].first==zero.front().second){
						check=1;
						ans[ganseon[zero.front().first.first][j]][i].second=max(zero.front().first.second+time[zero.front().first.first],ans[ganseon[zero.front().first.first][j]][i].second);
						break;
					}
				}
				if(check==0){
					ans[ganseon[zero.front().first.first][j]].push_back(make_pair(zero.front().second,zero.front().first.second+time[zero.front().first.first]));
				}
				size=ans[ganseon[zero.front().first.first][j]].size();
				if(count[ganseon[zero.front().first.first][j]]==0){
					int tmp=0;
					for(i=0;i<size;i++){
						tmp+=ans[ganseon[zero.front().first.first][j]][i].second;
					}
					zero.push(make_pair(make_pair(ganseon[zero.front().first.first][j],tmp),zero.front().second));
				}
			}
			zero.pop();
		}
		int tmp=0;
		int size=ans[w].size();
		for(i=0;i<size;i++){
			tmp+=ans[w][i].second;
		}
		printf("%d %d\n",tmp,time[w]);
		printf("%d\n",tmp+time[w]);
	}
}
