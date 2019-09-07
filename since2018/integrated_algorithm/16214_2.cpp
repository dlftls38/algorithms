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
int prime[100001];
vector<int>primes;
int phi,m;
uint64_t mul_mod(uint64_t a, uint64_t b, uint64_t m)
{
   long double x;
   uint64_t c;
   int64_t r;
   if (a >= m) a %= m;
   if (b >= m) b %= m;
   x = a;
   c = x * b / m;
   r = (int64_t)(a * b - c * m) % (int64_t)m;
   return r < 0 ? r + m : r;
}
uint64_t pow_mod(uint64_t a, uint64_t b, uint64_t m)
{
    uint64_t r = m==1?0:1;
    while (b > 0) {
        if (b & 1)
            r = mul_mod(r, a, m);
        b = b >> 1;
        a = mul_mod(a, a, m);
    }
    return r;
}
int main(){
	long long i,j;
	for(i=2;i<=100000;i++){
		if(prime[i])continue;
		for(j=i*i;j<=100000;j+=i){
			prime[j]=1;
		}
	}
	for(i=2;i<=100000;i++){
		if(prime[i]==0){
			primes.push_back(i);
		}
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d%d",&n,&m);
		
		
		map<int,int>divisor;
		int size=primes.size();
		int mm=m;
		for(i=0;i<size;i++){
			if(m<primes[i])break;
			while(mm%primes[i]==0){
				divisor[primes[i]]++;
				mm/=primes[i];
			}
		}
		if(mm!=1)divisor[mm]++;
		phi=1;
		for(auto it : divisor){
			int a=it.first;
			int b=it.second;
			int temp1=1;
			int temp2=1;
			for(i=0;i<b;i++){
				temp1*=a;
			}
			for(i=0;i<b-1;i++){
				temp2*=a;
			}
			phi*=temp1-temp2;
		}
		
		
		map<int,int>mp;
		int nn=n;
		while(1){
			nn=pow_mod(n,nn,m);
			if(mp[nn]==1){
				printf("%d\n",nn);
				break;
			}
			mp[nn]=1;
		}
	}
}
