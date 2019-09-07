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
using namespace std;
char a[51][51];
int check[2][50][50];
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int y=-1,x,d,c=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]=='B'){
				if(a[i][j+1]=='B'){
					d=0;
					y=i;
					x=j+1;
				}
				else{
					d=1;
					y=i+1;
					x=j;
				}
				break;
			}
		}
		if(y!=-1){
			break;
		}
	}
	queue<pair<pair<int,int>,pair<int,int> > >q;
	q.push(make_pair(make_pair(y,x),make_pair(d,c)));
	check[d][y][x]=1;
	while(!q.empty()){
		y=q.front().first.first;
		x=q.front().first.second;
		d=q.front().second.first;
		c=q.front().second.second;
		q.pop();
		//printf("%d %d %d %d\n",y,x,d,c);
		if(d==0){
			if(a[y][x-1]=='E' && a[y][x]=='E' && a[y][x+1]=='E'){
				printf("%d",c);
				return 0;
			}
		}
		else{
			if(a[y-1][x]=='E' && a[y][x]=='E' && a[y+1][x]=='E'){
				printf("%d",c);
				return 0;
			}
		}
		if(d==0){
			if(y+1<n && check[d][y+1][x]==0 && a[y+1][x-1]!='1' && a[y+1][x]!='1' && a[y+1][x+1]!='1'){
				check[d][y+1][x]=1;
				q.push(make_pair(make_pair(y+1,x),make_pair(d,c+1)));
			}
			if(y-1>=0 && check[d][y-1][x]==0 && a[y-1][x-1]!='1' && a[y-1][x]!='1' && a[y-1][x+1]!='1'){
				check[d][y-1][x]=1;
				q.push(make_pair(make_pair(y-1,x),make_pair(d,c+1)));
			}
			if(x+2<n && check[d][y][x+1]==0 && a[y][x+2]!='1'){
				check[d][y][x+1]=1;
				q.push(make_pair(make_pair(y,x+1),make_pair(d,c+1)));
			}
			if(x-2>=0 && check[d][y][x-1]==0 && a[y][x-2]!='1'){
				check[d][y][x-1]=1;
				q.push(make_pair(make_pair(y,x-1),make_pair(d,c+1)));
			}
			if(y>0 && y<n-1 && x>0 && x<n-1 && check[1][y][x]==0 && a[y+1][x-1]!='1' && a[y+1][x]!='1' && a[y+1][x+1]!='1' && a[y][x-1]!='1' && a[y][x]!='1' && a[y][x+1]!='1' && a[y-1][x-1]!='1' && a[y-1][x]!='1' && a[y-1][x+1]!='1'){
				check[1][y][x]=1;
				q.push(make_pair(make_pair(y,x),make_pair(1,c+1)));
			}
		}
		else{
			if(x+1<n && check[d][y][x+1]==0 && a[y-1][x+1]!='1' && a[y][x+1]!='1' && a[y+1][x+1]!='1'){
				check[d][y][x+1]=1;
				q.push(make_pair(make_pair(y,x+1),make_pair(d,c+1)));
			}
			if(x-1>=0 && check[d][y][x-1]==0 && a[y-1][x-1]!='1' && a[y][x-1]!='1' && a[y+1][x-1]!='1'){
				check[d][y][x-1]=1;
				q.push(make_pair(make_pair(y,x-1),make_pair(d,c+1)));
			}
			if(y+2<n && check[d][y+1][x]==0 && a[y+2][x]!='1'){
				check[d][y+1][x]=1;
				q.push(make_pair(make_pair(y+1,x),make_pair(d,c+1)));
			}
			if(y-2>=0 && check[d][y-1][x]==0 && a[y-2][x]!='1'){
				check[d][y-1][x]=1;
				q.push(make_pair(make_pair(y-1,x),make_pair(d,c+1)));
			}
			if(y>0 && y<n-1 && x>0 && x<n-1 && check[0][y][x]==0 && a[y+1][x-1]!='1' && a[y+1][x]!='1' && a[y+1][x+1]!='1' && a[y][x-1]!='1' && a[y][x]!='1' && a[y][x+1]!='1' && a[y-1][x-1]!='1' && a[y-1][x]!='1' && a[y-1][x+1]!='1'){
				check[0][y][x]=1;
				q.push(make_pair(make_pair(y,x),make_pair(0,c+1)));
			}
		}
	}
	printf("0");
}
