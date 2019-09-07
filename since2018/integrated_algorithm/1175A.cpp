#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,k;
		scanf("%lld%lld",&n,&k);
		long long count=0;
		while(n>0){
			if(n%k==0){
				n/=k;
				count++;
			}
			else{
				count+=n%k;
				n-=n%k;
			}
		}
		printf("%lld\n",count);
	}
}
