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
using namespace std;
typedef pair<int,int> pii;
int n,tc,r;
char dir[10];
int a[20][20];
void recur(int cnt){
	int i,j,k;
	if(cnt==1){
		printf("Case #%d:\n",r);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		return;
	}
	int check[20][20]={0};
	if(strcmp(dir,"left")==0){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[i][j]!=0){
					int y=i,x=j,val=a[i][j];
					a[i][j]=0;
					for(k=j-1;k>=0;k--){
						if(a[i][k]!=0){
							if(check[i][k]==1 || a[i][k]!=val){
								break;
							}
							else{
								x=k;
								check[i][k]=1;
								val*=2;
								break;
							}
						}
						else{
							x=k;
						}
					}
					a[y][x]=val;
				}
			}
		}
		recur(cnt+1);
	}
	if(strcmp(dir,"right")==0){
		for(i=0;i<n;i++){
			for(j=n-1;j>=0;j--){
				if(a[i][j]!=0){
					int y=i,x=j,val=a[i][j];
					a[i][j]=0;
					for(k=j+1;k<n;k++){
						if(a[i][k]!=0){
							if(check[i][k]==1 || a[i][k]!=val){
								break;
							}
							else{
								x=k;
								check[i][k]=1;
								val*=2;
								break;
							}
						}
						else{
							x=k;
						}
					}
					a[y][x]=val;
				}
			}
		}
		recur(cnt+1);
	}
	if(strcmp(dir,"down")==0){
		for(i=0;i<n;i++){
			for(j=n-1;j>=0;j--){
				if(a[j][i]!=0){
					int y=j,x=i,val=a[j][i];
					a[j][i]=0;
					for(k=j+1;k<n;k++){
						if(a[k][i]!=0){
							if(check[k][i]==1 || a[k][i]!=val){
								break;
							}
							else{
								y=k;
								check[k][i]=1;
								val*=2;
								break;
							}
						}
						else{
							y=k;
						}
					}
					a[y][x]=val;
				}
			}
		}
		recur(cnt+1);
	}
	if(strcmp(dir,"up")==0){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[j][i]!=0){
					int y=j,x=i,val=a[j][i];
					a[j][i]=0;
					for(k=j-1;k>=0;k--){
						if(a[k][i]!=0){
							if(check[k][i]==1 || a[k][i]!=val){
								break;
							}
							else{
								y=k;
								check[k][i]=1;
								val*=2;
								break;
							}
						}
						else{
							y=k;
						}
					}
					a[y][x]=val;
				}
			}
		}
		recur(cnt+1);
	}
}
int main(){
	scanf("%d",&tc);
	while(tc>r){
		r++;
		scanf("%d%s",&n,dir);
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		recur(0);
	}
}
