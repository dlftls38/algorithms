#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int v,e;
		scanf("%d%d",&v,&e);
		int i;
		int color[20001]={0};
		pair<int,int> g[200000];
		for(i=0;i<e;i++){
			int q,w;
			scanf("%d%d",&q,&w);
			if(w<q){
				g[i].first=w;
				g[i].second=q;
			}
			else{
				g[i].first=q;
				g[i].second=w;
			}
		}
		sort(g,g+e);
		int flag=0;
		for(i=0;i<e;i++){
			if(g[i].first==g[i].second){
				flag=1;
				break;
			}
			if(color[g[i].first]==0){
				if(color[g[i].second]==0){
					color[g[i].first]=1;
					color[g[i].second]=2;
				}
				else if(color[g[i].second]==1){
					color[g[i].first]=2;
				}
				else{
					color[g[i].first]=1;
				}
			}
			else if(color[g[i].first]==1){
				if(color[g[i].second]==0){
					color[g[i].second]=2;
				}
				else if(color[g[i].second]==1){
					flag=1;
					break;
				}
			}
			else{
				if(color[g[i].second]==0){
					color[g[i].second]=1;
				}
				else if(color[g[i].second]==2){
					flag=1;
					break;
				}
			}
		}
		if(flag==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
