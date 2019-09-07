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
int n;
int notPrime[4000001]; // 소수 아닌 집합 
vector<int> primes; // notPrime에서 소수 걸러냄
int main(){
    int i,j;
    for(i = 2; i <= 4000000; i++){
        if(notPrime[i]) continue;
        for(j = 2*i; j <= 4000000; j+=i){
            notPrime[j] = 1;
        }
    }
    primes.push_back(0);
    for(i = 2; i <= 4000000; i++){
        if(!notPrime[i]) primes.push_back(i);
    }
    int size=primes.size();
    for(i=1;i<size;i++){
    	primes[i]+=primes[i-1];
	}
	scanf("%d",&n);
	int s=0;
	int e=1;
	int ans=0;
    while(s!=size-1){
    	if(primes[e]-primes[s]==n){
    		ans++;
		}
    	if(e==size-1 || primes[e]-primes[s]>n){
    		s++;
		}
		else{
			e++;
		}
	}
	printf("%d",ans);
}
