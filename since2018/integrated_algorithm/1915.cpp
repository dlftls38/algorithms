#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int a[1000][1000]={0};
int b[1000][1000]={0};
int c[1000][1000]={0};
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	for(i=0;i<n;i++){
		char s[1001]={0};
		scanf("%s",s);
		for(j=0;j<m;j++){
			a[i][j]=s[j]-48;
		}
	}
	for(i=n-1;i>-1;i--){
		int x=0;
		for(j=m-1;j>-1;j--){
			if(a[i][j]==1){
				x++;
				b[i][j]=x;
			}
			else{
				x=0;
			}
		}
	}
	for(j=m-1;j>-1;j--){
		int y=0;
		for(i=n-1;i>-1;i--){
			if(a[i][j]==1){
				y++;
				c[i][j]=y;
			}
			else{
				y=0;
			}
		}
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]==1){
				int len=1;
				for(k=1;k<1000;k++){
					if(i+k < n && j+k<m && b[i+k][j]>k && c[i][j+k]>k){
						len++;
					}
					else{
						break;
					}
				}
				ans=max(ans,len);
			}
		}
	}
	printf("%d",ans*ans);
}
