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
	int test[1001];
	int tt=t;
	while(t--){
		int k,m,p;
		scanf("%d%d%d",&k,&m,&p);
		int i,j;
		int count[1001]={0};
		vector<int>ganseon[1001];
		for(i=0;i<p;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			count[b]++;
			ganseon[a].push_back(b);
		}
		queue<pair<int,int> >zero;
		for(i=1;i<=m;i++){
			if(count[i]==0){
				zero.push(make_pair(i,1));
			}
		}
		int ans[1001]={0};
		int cnt[1001]={0};
		while(!zero.empty()){
			int len=ganseon[zero.front().first].size();
			for(i=0;i<len;i++){
				count[ganseon[zero.front().first][i]]--;
				if(ans[ganseon[zero.front().first][i]]<zero.front().second){
					ans[ganseon[zero.front().first][i]]=zero.front().second;
					cnt[ganseon[zero.front().first][i]]=1;
				}
				else if(ans[ganseon[zero.front().first][i]]==zero.front().second){
					if(cnt[ganseon[zero.front().first][i]]==1){
						ans[ganseon[zero.front().first][i]]++;
						cnt[ganseon[zero.front().first][i]]=0;
					}
					else{
						cnt[ganseon[zero.front().first][i]]=1;	
					}
				}
				if(count[ganseon[zero.front().first][i]]==0){
					zero.push(make_pair(ganseon[zero.front().first][i],ans[ganseon[zero.front().first][i]]));
				}
			}
			zero.pop();
		}
		test[k]=ans[m];
	}
	for(int i=1;i<=tt;i++){
		printf("%d %d\n",i,test[i]);
	}
}

