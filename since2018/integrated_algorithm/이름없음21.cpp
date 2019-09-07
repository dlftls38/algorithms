#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int i;
	long long a[100]={0};
	a[0]=1;
	a[1]=1;
	a[2]=1;
	a[3]=2;
	a[4]=2;
	a[5]=3;
	a[6]=4;
	a[7]=5;
	for(i=8;i<100;i++){
		a[i]=a[i-1]+a[i-5];
	}
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		printf("%lld\n",a[n-1]);
	}
}
