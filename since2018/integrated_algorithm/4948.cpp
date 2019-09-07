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
int isprime[250000];
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
	prime(250000);
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		int sum=0;
		for(int i=n+1;i<=n*2;i++){
			if(isprime[i])sum++;
		}
		printf("%d\n",sum);
	}
}
