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
int isprime[1299710];
void prime(int num){
	int i;
    for (i=2; i<=num; i++){
    	isprime[i] = 1;	
	}
    for (i=2; i*i<=num; i++){
        if (isprime[i]==1){
            for (int j=i*i; j<=num; j+=i){
            	isprime[j] = 0;	
			}
        }
    }
}
int main(){
	prime(1299709);
	int t;
	scanf("%d",&t);
	int i,j;
	vector<int>prime;
	for(i=0;i<=1299709;i++){
		if(isprime[i]==1){
			prime.push_back(i);
		}
	}
	while(t--){
		int k;
		scanf("%d",&k);
		int size=prime.size();
		for(i=0;i<size-1;i++){
			if(k==prime[i] || k==prime[i+1]){
				printf("0\n");
				break;
			}
			else if(k>prime[i] && k<prime[i+1]){
				printf("%d\n",prime[i+1]-prime[i]);
				break;
			}
		}
	}
}
