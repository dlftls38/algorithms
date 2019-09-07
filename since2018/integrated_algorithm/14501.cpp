#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[2][15]={0};
	int b[2][15]={0};
	for(i=0;i<n;i++){
		scanf("%d%d",&a[0][i],&a[1][i]);
		b[0][i]=i+a[0][i]-1;
	}
	int answer=0;
	for(i=0;i<n;i++){
		if(b[0][i]<n){
			int m=0;
			for(j=i-1;j>-1;j--){
				if(b[0][j]<i)
					m=max(m,b[1][j]);
			}
			b[1][i]=a[1][i]+m;
			answer=max(answer,b[1][i]);
		}
	}
	printf("%d",answer);
}
