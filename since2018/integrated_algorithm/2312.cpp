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
int isprime[100001]={0};
vector<int>v;
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
    for(i=2;i<=num;i++){
    	if(isprime[i]==1){
    		v.push_back(i);
		}
	}
}
int main(){
	prime(100000);
	int t;
	scanf("%d",&t);
	int size=v.size();
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		for(i=0;i<size;i++){
			int cnt=0;
			while(n%v[i]==0){
				cnt++;
				n/=v[i];
			}
			if(cnt>0){
				printf("%d %d\n",v[i],cnt);
			}
		}
	}
}
