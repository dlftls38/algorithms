#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int b[6000][6000];
int main(){
	int n;
	scanf("%d",&n);
	char a[5001]={0};
	scanf("%s",a);
	char c[5001]={0};
	strcpy(c,a);
	reverse(c,c+n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i-1]==c[j-1]){
				b[i][j]=b[i-1][j-1]+1;
			}
			else{
				b[i][j]=max(b[i][j-1],b[i-1][j]);
			}
		}
	}
//	for(i=0;i<=n;i++){
//		for(j=0;j<=n;j++){
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}
	printf("%d",n-b[n][n]);
}
