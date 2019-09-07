#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int m;
	scanf("%d",&m);
	int i,j;
	long long input=0;
	for(i=m-1;i>-1;i--){
		long long x=1;
		for(j=0;j<i;j++){
			x*=a;
		}
		int q;
		scanf("%d",&q);
		input+=x*q;
	}
	int w[100]={0};
	int count=0;
	while(1){
		w[count++]=input%b;
		input/=b;
		if(input==0){
			break;
		}
	}
	for(i=count-1;i>-1;i--){
		printf("%d ",w[i]);
	}
}
