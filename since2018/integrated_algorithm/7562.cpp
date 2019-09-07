#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int l;
		scanf("%d",&l);
		int y,x;
		scanf("%d%d",&y,&x);
		int dy,dx;
		scanf("%d%d",&dy,&dx);
		queue<pair<pair<int,int>,int>>q;
		q.push({{y,x},0});
		int check[300][300]={0};
		int i,j;
		for(i=0;i<l;i++){
			for(j=0;j<l;j++){
				check[i][j]=INF;
			}
		}
		check[y][x]=0;
		while(!q.empty()){
			y=q.front().first.first;
			x=q.front().first.second;
			int cnt=q.front().second;
			q.pop();
			if(y==dy && x==dx){
				printf("%d\n",cnt);
				break;
			}
			if(y+1<l && x+2<l && check[y+1][x+2]>cnt+1){
				check[y+1][x+2]=cnt+1;
				q.push({{y+1,x+2},cnt+1});
			}
			if(y+2<l && x+1<l && check[y+2][x+1]>cnt+1){
				check[y+2][x+1]=cnt+1;
				q.push({{y+2,x+1},cnt+1});
			}
			if(y-1>=0 && x-2>=0 && check[y-1][x-2]>cnt+1){
				check[y-1][x-2]=cnt+1;
				q.push({{y-1,x-2},cnt+1});
			}
			if(y-2>=0 && x-1>=0 && check[y-2][x-1]>cnt+1){
				check[y-2][x-1]=cnt+1;
				q.push({{y-2,x-1},cnt+1});
			}
			if(y+2<l && x-1>=0 && check[y+2][x-1]>cnt+1){
				check[y+2][x-1]=cnt+1;
				q.push({{y+2,x-1},cnt+1});
			}
			if(y-2>=0 && x+1<l && check[y-2][x+1]>cnt+1){
				check[y-2][x+1]=cnt+1;
				q.push({{y-2,x+1},cnt+1});
			}
			if(y+1<l && x-2>=0 && check[y+1][x-2]>cnt+1){
				check[y+1][x-2]=cnt+1;
				q.push({{y+1,x-2},cnt+1});
			}
			if(y-1>=0 && x+2<l && check[y-1][x+2]>cnt+1){
				check[y-1][x+2]=cnt+1;
				q.push({{y-1,x+2},cnt+1});
			}
		}
	}
}
