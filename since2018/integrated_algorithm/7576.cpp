#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int a[1002][1002];
int b[1111111];
int c[1111111];
int bb[1111111];
int cc[1111111];
int tail;
int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==1){
				b[tail]=i;
				c[tail++]=j;
			}
		}
	}
	int day=0;
	while(1){
//		printf("tail = %d\n",tail);
//		for(i=0;i<tail;i++){
//			printf("%d %d\n",b[i],c[i]);
//		}
		int tail2=0;
		for(i=0;i<tail;i++){
			if(b[i]+1 <= n && a[b[i]+1][c[i]]==0){
				a[b[i]+1][c[i]]=1;
				bb[tail2]=b[i]+1;
				cc[tail2++]=c[i];
			}
			if(c[i]+1 <= m && a[b[i]][c[i]+1]==0){
				a[b[i]][c[i]+1]=1;
				bb[tail2]=b[i];
				cc[tail2++]=c[i]+1;
			}
			if(b[i]-1 >= 1 && a[b[i]-1][c[i]]==0){
				a[b[i]-1][c[i]]=1;
				bb[tail2]=b[i]-1;
				cc[tail2++]=c[i];
			}
			if(c[i]-1 >= 1 && a[b[i]][c[i]-1]==0){
				a[b[i]][c[i]-1]=1;
				bb[tail2]=b[i];
				cc[tail2++]=c[i]-1;
			}
		}
		for(i=0;i<tail2;i++){
			b[i]=bb[i];
			c[i]=cc[i];
		}
		tail=tail2;
		if(tail==0){
			break;
		}
		day++;
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			if(a[i][j]==0){
				day=-1;
			}
		}
	}
	printf("%d",day);
}
