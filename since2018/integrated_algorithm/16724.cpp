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
char mp[1212][1212];
int check[1212][1212];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",mp[i]);
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i+1<n && mp[i+1][j]=='U' || i-1>=0 && mp[i-1][j]=='D' || j-1>=0 && mp[i][j-1]=='R' || j+1<m && mp[i][j+1]=='L'){
				
			}
			else{
				//ans++;
			}
			if(check[i][j]==0){
				ans++;
				queue<pair<int,int>>q;
				q.push({i,j});
				check[i][j]=1;
				while(!q.empty()){
					int y=q.front().first;
					int x=q.front().second;
					q.pop();
					if(mp[y][x]=='U'){
						if(check[y-1][x]==0){
							q.push({y-1,x});
							check[y-1][x]=1;
						}
					}
					if(mp[y][x]=='D'){
						if(check[y+1][x]==0){
							q.push({y+1,x});
							check[y+1][x]=1;
						}
					}
					if(mp[y][x]=='L'){
						if(check[y][x-1]==0){
							q.push({y,x-1});
							check[y][x-1]=1;
						}
					}
					if(mp[y][x]=='R'){
						if(check[y][x+1]==0){
							q.push({y,x+1});
							check[y][x+1]=1;
						}
					}
					if(y+1<n && mp[y+1][x]=='U'){
						if(check[y+1][x]==0){
							q.push({y+1,x});
							check[y+1][x]=1;
						}
					}
					if(y-1>=0 && mp[y-1][x]=='D'){
						if(check[y-1][x]==0){
							q.push({y-1,x});
							check[y-1][x]=1;
						}
					}
					if(x+1<m && mp[y][x+1]=='L'){
						if(check[y][x+1]==0){
							q.push({y,x+1});
							check[y][x+1]=1;
						}
					}
					if(x-1>=0 && mp[y][x-1]=='R'){
						if(check[y][x-1]==0){
							q.push({y,x-1});
							check[y][x-1]=1;
						}
					}
				}
			}
		}
	}
	printf("%d",ans);
}
