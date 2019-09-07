#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int a[30][30];
int check[30][30];
int answer[1000];
int tail;
void dfs(int y, int x){
	answer[tail]++;
	check[y][x]=1;
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
	int i,j;
	for(i=1;i<n+1;i++){
		char s[30]={0};
		scanf("%s",s);
		for(j=1;j<n+1;j++){
			a[i][j]=s[j-1]-48;
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
	sort(answer,answer+tail);
	printf("%d\n",tail);
	for(i=0;i<tail;i++){
		printf("%d\n",answer[i]);
	}
}
