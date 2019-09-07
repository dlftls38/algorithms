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
int pow(int a, int b) {
    if (b == 0) {
        return 1;
    }
    int n = pow(a, b / 2);
    int temp = (1LL * n * n)%m;
    if (b % 2 == 0) {
        return temp;
    } 
	else {
        return (1LL * a * temp)%m;
    }
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
		mp[n]=1;
		int nn=n;
		while(1){
			nn=pow(n,nn);
			if(mp[nn]==1){
				printf("%d\n",nn);
				break;
			}
			mp[nn]=1;
		}
	}
}
