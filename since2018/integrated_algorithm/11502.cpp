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
int isprime[10001]={0};
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
	int t;
	scanf("%d",&t);
	prime(1000);
	vector<int>primes;
	int i,j,k;
	for(i=2;i<=1000;i++){
		if(isprime[i]){
			primes.push_back(i);
		}
	}
	int len=primes.size();
	while(t--){
		int n;
		scanf("%d",&n);
		int check=0;
		vector<int>ans;
		for(i=0;i<len;i++){
			for(j=0;j<len;j++){
				for(k=0;k<len;k++){
					if(primes[i]+primes[j]+primes[k]==n){
						ans.push_back(primes[i]);
						ans.push_back(primes[j]);
						ans.push_back(primes[k]);
						check=1;
						break;
					}
					if(primes[i]+primes[k]+primes[k]>n){
						break;
					}
				}
				if(check)break;
			}
			if(check)break;
		}
		sort(ans.begin(),ans.end());
		for(i=0;i<3;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
}
