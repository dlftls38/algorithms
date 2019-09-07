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
int main(){
	int r1,c1;
	int r2,c2;
	scanf("%d%d",&r1,&c1);
	scanf("%d%d",&r2,&c2);
	queue<pair<pair<int,int>,int> >q;
	q.push({{r1,c1},0});
	int check[10][9]={0};
	check[r1][c1]=1;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int cnt=q.front().second;
		//printf("%d %d %d\n",y,x,cnt);
		q.pop();
		if(y==r2 && x==c2){
			printf("%d",cnt);
			return 0;
		}
		if(y+3<10 && x+2<9 && check[y+3][x+2]==0){
			if(!(y+1==r2 && x==c2) && !(y+2==r2 && x+1==c2)){
				check[y+3][x+2]=1;
				q.push({{y+3,x+2},cnt+1});
			}
		}
		if(y+3<10 && x-2>=0 && check[y+3][x-2]==0){
			if(!(y+1==r2 && x==c2) && !(y+2==r2 && x-1==c2)){
				check[y+3][x-2]=1;
				q.push({{y+3,x-2},cnt+1});
			}
		}
		if(y-3>=0 && x+2<9 && check[y-3][x+2]==0){
			if(!(y-1==r2 && x==c2) && !(y-2==r2 && x+1==c2)){
				check[y-3][x+2]=1;
				q.push({{y-3,x+2},cnt+1});
			}
		}
		if(y-3>=0 && x-2>=0 && check[y-3][x-2]==0){
			if(!(y-1==r2 && x==c2) && !(y-2==r2 && x-1==c2)){
				check[y-3][x-2]=1;
				q.push({{y-3,x-2},cnt+1});
			}
		}
		if(y+2<10 && x+3<9 && check[y+2][x+3]==0){
			if(!(y==r2 && x+1==c2) && !(y+1==r2 && x+2==c2)){
				check[y+2][x+3]=1;
				q.push({{y+2,x+3},cnt+1});
			}
		}
		if(y+2<10 && x-3>=0 && check[y+2][x-3]==0){
			if(!(y==r2 && x-1==c2) && !(y+1==r2 && x-2==c2)){
				check[y+2][x-3]=1;
				q.push({{y+2,x-3},cnt+1});
			}
		}
		if(y-2>=0 && x+3<9 && check[y-2][x+3]==0){
			if(!(y==r2 && x+1==c2) && !(y-1==r2 && x+2==c2)){
				check[y-2][x+3]=1;
				q.push({{y-2,x+3},cnt+1});
			}
		}
		if(y-2>=0 && x-3>=0 && check[y-2][x-3]==0){
			if(!(y==r2 && x-1==c2) && !(y-1==r2 && x-2==c2)){
				check[y-2][x-3]=1;
				q.push({{y-2,x-3},cnt+1});
			}
		}
	}
	printf("-1");
}
