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
int n;
int a[20][20];
int recur(int cnt){
	int ret=0;
	int i,j,k;
	if(cnt==5){
		//printf("\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				ret=max(ret,a[i][j]);
				//printf("%d ",a[i][j]);
			}
			//printf("\n");
		}
		//printf("\n");
		return ret;
	}
	int temp[20][20]={0};
	int check[20][20]={0};
	memcpy(temp,a,sizeof(temp));
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
	ret=max(ret,recur(cnt+1));
	memcpy(a,temp,sizeof(temp));
	memset(check,0,sizeof(check));
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
	ret=max(ret,recur(cnt+1));
	memcpy(a,temp,sizeof(temp));
	memset(check,0,sizeof(check));
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
	ret=max(ret,recur(cnt+1));
	memcpy(a,temp,sizeof(temp));
	memset(check,0,sizeof(check));
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
	ret=max(ret,recur(cnt+1));
	memcpy(a,temp,sizeof(temp));
	memset(check,0,sizeof(check));
	return ret;
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",recur(0));
}
