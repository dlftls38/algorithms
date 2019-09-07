#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[3]={0};
	a[0]=1;
	a[1]=1;
	a[2]=1;
	for(int i=1;i<n;i++){
		int q,w,e;
		q=a[0]+a[1]+a[2];
		w=a[0]+a[2];
		e=a[0]+a[1];
		a[0]=q;
		a[1]=w;
		a[2]=e;
		a[0]%=9901;
		a[1]%=9901;
		a[2]%=9901;
	}
	printf("%d",(a[0]+a[1]+a[2])%9901);
	
}
