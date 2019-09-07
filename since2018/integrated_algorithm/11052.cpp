#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[1000]={0};
	int b[1000]={0};
	for(i=1;i<n+1;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i;i+j<=n;j++){
			a[i+j]=max(a[i+j],a[i]+a[j]);
		}
	}
	printf("%d",a[n]);
}
