#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	long long n;
	int b;
	scanf("%lld%d",&n,&b);
	int count=0;
	long long x=1;
	for(;x<=1000000000;count++){
		x*=b;
	}
	int i;
	int start=0;
	for(i=0;i<count+1;i++){
		long long q=n/x;
		//printf("%lld %lld %lld\n",q,n,x);
		if(n>=x){
			start=1;
		}
		if(start){
			if(q<10){
				printf("%d",q);
			}
			else{
				printf("%c",q+55);
			}
			n%=x;	
		}
		x/=b;
	}
}
