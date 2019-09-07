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
		int ans[1001]={0};
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
		queue<pair<int,int> >zero;
		for(i=1;i<=n;i++){
			if(count[i]==0){
				zero.push(make_pair(i,0));
			}
		}
		while(!zero.empty()){
			int len=ganseon[zero.front().first].size();
			for(j=0;j<len;j++){
				ans[ganseon[zero.front().first][j]]=max(zero.front().second+time[zero.front().first],ans[ganseon[zero.front().first][j]]);
				if(--count[ganseon[zero.front().first][j]]==0){
					zero.push(make_pair(ganseon[zero.front().first][j],ans[ganseon[zero.front().first][j]]));
				}
			}
			zero.pop();
		}
		printf("%d\n",ans[w]+time[w]);
	}
}
