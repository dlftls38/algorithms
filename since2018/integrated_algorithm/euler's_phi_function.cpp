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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
using namespace std;
typedef pair<int,int> pii;
int prime[10001];
vector<int>primes;
int main(){
	int i,j;
	for(i=2;i<=10000;i++){
		if(prime[i])continue;
		for(j=i*i;j<=10000;j+=i){
			prime[j]=1;
		}
	}
	for(i=2;i<=10000;i++){
		if(prime[i]==0){
			primes.push_back(i);
		}
	}
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0) break;
		map<int,int>mp;
		int size=primes.size();
		for(i=0;i<size;i++){
			if(n<primes[i])break;
			while(n%primes[i]==0){
				mp[primes[i]]++;
				n/=primes[i];
			}
		}
		if(n!=1)mp[n]++;
		int ans=1;
		for(auto it : mp){
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
			ans*=temp1-temp2;
		}
		printf("%d\n",ans);
	}
}
