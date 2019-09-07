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
int isprime[100001]={0};
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
	int n;
	scanf("%d",&n);
	int i,j;
	n++;
	prime(n);
	if(n<=3){
		printf("1\n");
	}
	else{
		printf("2\n");
	}
	for(i=2;i<=n;i++){
		if(isprime[i]==1){
			printf("1 ");
		}
		else{
			printf("2 ");
		}
	}
}
