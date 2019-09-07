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
using namespace std;
int a[100][100];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	map<int,int>mp;
	int check=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(mp[a[i][j]]==1){
				printf("FALSE");
				check=1;
				return 0;
			}
			mp[a[i][j]]=1;
		}
	}
	if(check==1){
		printf("FALSE");
		return 0;
	}
	int sum=n*(n*n+1)/2;
	int k=0;
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<n;j++){
			k+=a[i][j];
		}
		if(k!=sum){
			printf("FALSE");
			return 0;
		}
		k=0;
		for(j=0;j<n;j++){
			k+=a[j][i];
		}
		if(k!=sum){
			printf("FALSE");
			return 0;
		}
	}
	k=0;
	for(i=0;i<n;i++){
		k+=a[i][i];
	}
	if(k!=sum){
		printf("FALSE");
		return 0;
	}
	k=0;
	for(i=0;i<n;i++){
		k+=a[0+i][n-1-i];
	}
	if(k!=sum){
		printf("FALSE");
		return 0;
	}
	printf("TRUE");
}
