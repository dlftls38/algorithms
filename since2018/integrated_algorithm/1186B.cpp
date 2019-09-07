#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int a[1000];
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	int i,j;
	if(n>m){
		long long temp=n;
		n=m;
		m=temp;
	}
	long long ans=0;
	while(n>0){
		if(n>4){
			ans+=5*((n+1)/6);
		}
		if(n>1){
			ans+=(m/2+m%2)*((n+1)/3);
			n-=((n+1)/3)*3;
		}
		else if(n==1){
			n-=2;
			ans+=(m+1)/3;
		}
	}
	printf("%lld",ans);
}
