#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int two(long long n){
	int count=0;
	long long i;
	for(i=2;n/i>=1;i*=2){
		count+=n/i;
	}
	return count;
}
int five(long long n){
	int count=0;
	long long i;
	for(i=5;n/i>=1;i*=5){
		count+=n/i;
	}
	return count;
}
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	int a=two(n)-two(m)-two(n-m);
	int b=five(n)-five(m)-five(n-m);
	printf("%d",min(a,b));
}

