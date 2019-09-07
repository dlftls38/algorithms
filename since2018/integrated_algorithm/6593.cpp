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
int main(){
	while(1){
		int l,c,r;
		scanf("%d%d%d",&l,&c,&r);
		if(l==0 && c== 0 && r==0){
			break;
		}
		int i,j,k;
		char a[31][31][31]={0};
		int check[30][30][30]={0};
		int y,x,z,t;
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				scanf("%s",a[i][j]);
				for(k=0;k<r;k++){
					if(a[i][j][k]=='S'){
						y=j;
						x=k;
						z=i;
						check[z][y][x]=1;
					}
				}
			}
			char temp[2]={0};
			fgets(temp,1,stdin);
		}
		queue<pair<pair<int,int>,pair<int,int> > >q;
		q.push(make_pair(make_pair(y,x),make_pair(z,0)));
		int ans=INT_MAX;
		while(!q.empty()){
			y=q.front().first.first;
			x=q.front().first.second;
			z=q.front().second.first;
			t=q.front().second.second;
			q.pop();
			if(a[z][y][x]=='E'){
				ans=t;
				break;
			}
			if(z+1<l && check[z+1][y][x]==0 && a[z+1][y][x]!='#'){
				q.push(make_pair(make_pair(y,x),make_pair(z+1,t+1)));
				check[z+1][y][x]=1;
			}
			if(z-1>=0 && check[z-1][y][x]==0 && a[z-1][y][x]!='#'){
				q.push(make_pair(make_pair(y,x),make_pair(z-1,t+1)));
				check[z-1][y][x]=1;
			}
			if(y+1<c && check[z][y+1][x]==0 && a[z][y+1][x]!='#'){
				q.push(make_pair(make_pair(y+1,x),make_pair(z,t+1)));
				check[z][y+1][x]=1;
			}
			if(y-1>=0 && check[z][y-1][x]==0 && a[z][y-1][x]!='#'){
				q.push(make_pair(make_pair(y-1,x),make_pair(z,t+1)));
				check[z][y-1][x]=1;
			}
			if(x+1<r && check[z][y][x+1]==0 && a[z][y][x+1]!='#'){
				q.push(make_pair(make_pair(y,x+1),make_pair(z,t+1)));
				check[z][y][x+1]=1;
			}
			if(x-1>=0 && check[z][y][x-1]==0 && a[z][y][x-1]!='#'){
				q.push(make_pair(make_pair(y,x-1),make_pair(z,t+1)));
				check[z][y][x-1]=1;
			}
		}
		if(ans==INT_MAX){
			printf("Trapped!\n");
		}
		else{
			printf("Escaped in %d minute(s).\n",ans);
		}
	}
}
