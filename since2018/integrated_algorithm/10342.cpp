#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int cnt=0;
	while(1){
		cnt++;
		int w,l;
		scanf("%d%d",&w,&l);
		if(w+l==0){
			break;
		}
		char room[30][30]={0};
		int i,j;
		int y,x,d;
		for(i=0;i<l;i++){
			scanf("%s",room[i]);
			for(j=0;j<w;j++){
				if(room[i][j]=='*'){
					y=i;
					x=j;
					if(y==0){
						d=2;
						y++;
					}
					else if(x==w-1){
						d=3;
						x--;
					}
					else if(y==l-1){
						d=4;
						y--;
					}
					else if(x==0){
						d=1;
						x++;
					}
				}
			}
		}
		queue<pair<pair<int,int>,int>>q;
		q.push({{y,x},d});
		while(!q.empty()){
			y=q.front().first.first;
			x=q.front().first.second;
			d=q.front().second;
			q.pop();
			if(room[y][x]=='x'){
				room[y][x]='&';
				break;
			}
			else if(room[y][x]=='.'){
				if(d==1){
					x++;
				}
				else if(d==2){
					y++;
				}
				else if(d==3){
					x--;
				}
				else if(d==4){
					y--;
				}
			}
			else if(room[y][x]=='/'){
				if(d==1){
					y--;
					d=4;
				}
				else if(d==2){
					x--;
					d=3;
				}
				else if(d==3){
					y++;
					d=2;
				}
				else if(d==4){
					x++;
					d=1;
				}
			}
			else if(room[y][x]=='\\'){
				if(d==1){
					y++;
					d=2;
				}
				else if(d==2){
					x++;
					d=1;
				}
				else if(d==3){
					y--;
					d=4;
				}
				else if(d==4){
					x--;
					d=3;
				}
			}
			q.push({{y,x},d});
		}
		printf("HOUSE %d\n",cnt);
		for(i=0;i<l;i++){
			for(j=0;j<w;j++){
				printf("%c",room[i][j]);
			}
			printf("\n");
		}
	}
}
