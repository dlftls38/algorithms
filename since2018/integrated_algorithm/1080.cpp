#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
void change(int a[52][52],int y,int x){
	if(a[y+1][x]==1) a[y+1][x]=0;
	else a[y+1][x]=1;
	if(a[y][x+1]==1) a[y][x+1]=0;
	else a[y][x+1]=1;
	if(a[y+1][x+1]==1) a[y+1][x+1]=0;
	else a[y+1][x+1]=1;
	if(a[y-1][x]==1) a[y-1][x]=0;
	else a[y-1][x]=1;
	if(a[y][x-1]==1) a[y][x-1]=0;
	else a[y][x-1]=1;
	if(a[y-1][x-1]==1) a[y-1][x-1]=0;
	else a[y-1][x-1]=1;
	if(a[y-1][x+1]==1) a[y-1][x+1]=0;
	else a[y-1][x+1]=1;
	if(a[y+1][x-1]==1) a[y+1][x-1]=0;
	else a[y+1][x-1]=1;
	if(a[y][x]==1) a[y][x]=0;
	else a[y][x]=1;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[52][52]={0};
	int b[52][52]={0};
	int i,j;
	for(i=1;i<=n;i++){
		char s[52]={0};
		scanf("%s",s);
		for(j=1;j<=m;j++){
			a[i][j]=s[j-1]-48;
		}
	}
	for(i=1;i<=n;i++){
		char s[52]={0};
		scanf("%s",s);
		for(j=1;j<=m;j++){
			b[i][j]=s[j-1]-48;
		}
	}
	int count=0;
	if(n>=3 && m>=3)
	for(i=2;i<n;i++){
		for(j=2;j<m;j++){
			if(a[i-1][j-1]!=b[i-1][j-1]){
				change(a,i,j);
				count++;
			}
		}
	}
	int check=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]!=b[i][j]){
				check=1;
			}
		}
	}
	if(check==1){
		printf("-1");
	}
	else{
		printf("%d",count);
	}
}
