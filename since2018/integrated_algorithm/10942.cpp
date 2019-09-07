#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
#include <limits.h>
using namespace std;
int ans[2001][2001]={0};
int main(){
	int n;
	scanf("%d",&n);
	int a[2001]={0};
	int i,j,k;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		ans[i][i]=1;
	}
	for(i=1;i<n;i++){
		if(a[i]==a[i+1]){
			ans[i][i+1]=1;
		}
	}
	for(i=2;i<n;i++){
		for(k=1;;k++){
			if(i-k>=1 && i+1+k<=n){
				if(ans[i-k+1][i+1+k-1]==1 && a[i-k]==a[i+1+k]){
					ans[i-k][i+1+k]=1;
				}
			}
			if(i-k>=1 && i+k<=n){
				if(ans[i-k+1][i+k-1]==1 && a[i-k]==a[i+k]){
					ans[i-k][i+k]=1;
				}
			}
			else{
				break;
			}
		}
	}
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int s,e;
		scanf("%d%d",&s,&e);
		printf("%d\n",ans[s][e]);
	}
}
