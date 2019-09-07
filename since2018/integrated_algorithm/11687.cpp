#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
long long five(long long n){
	long long count=0;
	long long i;
	for(i=5;n/i>=1;i*=5){
		count+=n/i;
	}
	return count;
}
int main(){
	long long m;
	scanf("%lld",&m);
	for(long long i=m*4;i<=100000000000;i+=5){
		if(i%5>0){
			i+=5-i%5;
		}
		if(five(i)==m){
			printf("%lld",i);
			break;	
		}
		else if(five(i)>m){
			printf("-1");
			break;
		}
	}
}

