#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int a[102][102];
int distanc[102][102];
int queue_y[10004];
int queue_x[10004];
int queue_d[10004];
int tail;
void bfs(int y,int x,int d){
	if(a[y+1][x]==1 && distanc[y+1][x]>d+1){
		queue_y[tail]=y+1;
		queue_x[tail]=x;
		queue_d[tail++]=d+1;
	}
	if(a[y][x+1]==1 && distanc[y][x+1]>d+1){
		queue_y[tail]=y;
		queue_x[tail]=x+1;
		queue_d[tail++]=d+1;
	}
	if(a[y-1][x]==1 && distanc[y-1][x]>d+1){
		queue_y[tail]=y-1;
		queue_x[tail]=x;
		queue_d[tail++]=d+1;
	}
	if(a[y][x-1]==1 && distanc[y][x-1]>d+1){
		queue_y[tail]=y;
		queue_x[tail]=x-1;
		queue_d[tail++]=d+1;
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<n+1;i++){
		char s[101]={0};
		scanf("%s",s);
		for(j=1;j<m+1;j++){
			a[i][j]=s[j-1]-48;
			distanc[i][j]=100000;
		}
	}
	distanc[1][1]=1;
	bfs(1,1,1);
	for(i=0;i<tail;i++){
		if(queue_d[i]<distanc[queue_y[i]][queue_x[i]]){
			distanc[queue_y[i]][queue_x[i]]=queue_d[i];
			bfs(queue_y[i],queue_x[i],queue_d[i]);
		}
	}
	printf("%d",distanc[n][m]);
}
