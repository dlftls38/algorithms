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
	int m,n;
	scanf("%d%d",&m,&n);
	prime(n);
	int i,j;
	int sum=0;
	int mn=INT_MAX;
	for(i=m;i<=n;i++){
		if(isprime[i]==1){
			sum+=i;
			mn=min(mn,i);
		}
	}
	if(sum==0){
		printf("-1");
	}
	else{
		printf("%d\n%d",sum,mn);
	}
}
