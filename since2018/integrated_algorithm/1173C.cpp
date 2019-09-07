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
int a[200001];
int b[200001];
int c[200001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		c[a[i]]=1;
	}
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
		c[b[i]]=i+1; 
	}
	int check=0;
	for(i=1;i<=n;i++){
		if(b[i]==1){
			check=1;
			int count=1;
			for(j=i;j<=n;j++){
				if(b[j]!=count++){
					check=0;
					break;
				}
			}
			break;
		}
	}
	if(check==1){
		if(b[n]==n){
			printf("0");
			return 0;
		}
		else{
			if(c[b[n]+1]==1){
				for(i=b[n]+2;i<=n;i++){
					if(c[i]<=c[i-1]+1){
						c[i]=c[i-1]+1;
					}
					else{
						check=0;
						break;
					}
				}
				if(check==1){
					printf("%d",c[n]);
					return 0;
				}
			}
		}
	}
	for(i=2;i<=n;i++){
		if(c[i-1]+1>c[i]){
			c[i]=c[i-1]+1;
		}
	}
	printf("%d",c[n]);
}
