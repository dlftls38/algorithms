#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
long long power(long long x,long long y,long long mod){
	long long ans=1;
	while(y>0){
		if(y%2==1){
			ans *= x;
			ans %= mod;
		}
		x *= x;
		x %= mod;
		y/=2;
	}
	return ans;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	long long mod=1000000007;
	long long n1=1,n2=1,n3;
	int i,j;
	for(i=2;i<=n;i++){
		n1*=i;
		n1%=mod;
	}
	for(i=2;i<=k;i++){
		n2*=i;
		n2%=mod;
	}
	for(i=2;i<=n-k;i++){
		n2*=i;
		n2%=mod;
	}
	n3=power(n2,mod-2,mod);
	n3*=n1;
	n3%=mod;
	printf("%lld",n3);
}
