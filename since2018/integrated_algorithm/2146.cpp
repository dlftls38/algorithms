#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int a[102][102];
int check[102][102];
vector<pair<int,int> >v[10000];
int tail;
void dfs(int y,int x){
	check[y][x]=1;
	v[tail].push_back(pair<int,int>(y,x));
	if(a[y+1][x]==1 && check[y+1][x]==0){
		dfs(y+1,x);
	}
	if(a[y][x+1]==1 && check[y][x+1]==0){
		dfs(y,x+1);
	}
	if(a[y-1][x]==1 && check[y-1][x]==0){
		dfs(y-1,x);
	}
	if(a[y][x-1]==1 && check[y][x-1]==0){
		dfs(y,x-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k,l;
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			if(a[i][j]==1 && check[i][j]==0){
				dfs(i,j);
				tail++;
			}
		}
	}
	int answer=100000;
	for(i=0;i<tail-1;i++){
		for(j=i+1;j<tail;j++){
			for(k=0;k<v[i].size();k++){
				for(l=0;l<v[j].size();l++){
					if(abs(v[i][k].first-v[j][l].first)+abs(v[i][k].second-v[j][l].second)-1!=0 && abs(v[i][k].first-v[j][l].first)+abs(v[i][k].second-v[j][l].second)-1<answer){
						answer=abs(v[i][k].first-v[j][l].first)+abs(v[i][k].second-v[j][l].second)-1;
						//printf("%d %d %d %d  %d\n",v[i][j].first,v[i][j].second,v[i+1][k].first,v[i+1][k].second,abs(v[i][k].first-v[j][l].first)+abs(v[i][k].second-v[j][l].second)-1);
					}
				}
			}
		}
	}
	printf("%d",answer);
}
