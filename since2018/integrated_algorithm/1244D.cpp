#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
struct cost{
	int w[3];
}cost[100001];
vector<int>link[100001];
int check[100001];
int ans2[100001];
int t[100001];
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<3;i++){
		for(j=1;j<=n;j++){
			int c;
			cin>>c;
			cost[j].w[i]=c;
		}
	}
	for(i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		link[u].push_back(v);
		link[v].push_back(u);
	}
	int start;
	for(i=1;i<=n;i++){
		if(link[i].size()>2){
			printf("-1");
			return 0;
		}
		if(link[i].size()==1){
			start=i;
		}
	}
	long long ans=1000000000000000000;
	int num;
	int cnt=0;
	int cc[3];
	for(i=0;i<6;i++){
		memset(check,0,sizeof(check));
		long long temp=0;
		int cur=start;
		cnt=0;
		if(i==0){
			cc[0]=0;
			cc[1]=1;
			cc[2]=2;
		}
		else if(i==1){
			cc[0]=0;
			cc[1]=2;
			cc[2]=1;
		}
		else if(i==2){
			cc[0]=1;
			cc[1]=0;
			cc[2]=2;
		}
		else if(i==3){
			cc[0]=1;
			cc[1]=2;
			cc[2]=0;
		}
		else if(i==4){
			cc[0]=2;
			cc[1]=0;
			cc[2]=1;
		}
		else if(i==5){
			cc[0]=2;
			cc[1]=1;
			cc[2]=0;
		}
		check[cur]=1;
		//printf("%d\n",start);
		//printf("\n\n");
		while(1){
			temp+=cost[cur].w[cc[cnt]];
			t[cur]=cc[cnt];
			//printf("%d %d  %d\n",cur,cc[cnt],cost[cur].w[cc[cnt]]);
			cnt = (cnt+1)%3;
			//printf("%d %d\n",cur,cnt);
			if(check[link[cur][0]]==0){
				check[link[cur][0]]=1;
				cur=link[cur][0];
			}
			else if(link[cur].size()>1 && check[link[cur][1]]==0){
				check[link[cur][1]]=1;
				cur=link[cur][1];
			}
			else{
				break;
			}
		}
		//printf("\n\n");
		if(ans>temp){
			ans=temp;
			num=i;
			for(j=1;j<=n;j++){
				ans2[j]=t[j]+1;
			}
		}
	}
	printf("%lld\n",ans);
	for(j=1;j<=n;j++){
		printf("%d ",ans2[j]);
	}
}
