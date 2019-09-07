#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	long long n;
	scanf("%lld",&n);
	int i;
	long long x[35];
	long long xx[35];
	x[34]=1;
	xx[34]=1;
	for(i=33;i>-1;i--){
		x[i]=x[i+1]*(-2);
		xx[i]=x[i];
	}
	for(i=32;i>-1;i--){
		xx[i]+=xx[i+2];
	}
	int start=0;
	for(i=0;i<33;i++){
		//printf("!%lld!\n",n);
		if(n>=0 && xx[i]>=n && xx[i+2]<n){
			start=1;
		}
		if(n<0 && xx[i]<=n && xx[i+2]>n){
			start=1;
		}
		if(start==1){
			if(n>=0){
				if(xx[i]>=n && xx[i+2]<n){
					printf("1");
					n-=x[i];
				}
				else{
					printf("0");
				}
			}
			else{
				if(xx[i]<=n && xx[i+2]>n){
					printf("1");
					n-=x[i];
				}
				else{
					printf("0");
				}		
			}
		}
	}
	if(n==-2 || n==-1){
		printf("1");
		n+=2;
	}
	else{
		if(start==1)
			printf("0");
	}
	if(n==1){
		printf("1");
	}
	else{
		printf("0");
	}
}
