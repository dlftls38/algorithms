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
	prime(10000);
	vector<int>v;
	int i,j;
	int n;
	for(i=2;i<=10000;i++){
		if(isprime[i]==1){
			v.push_back(i);
		}
	}
	int size=v.size();
	while(t--){
		scanf("%d",&n);
		int gap=INT_MAX;
		int ans1,ans2;
		for(i=0;i<size;i++){
			for(j=i;j<size;j++){
				if(v[i]+v[j]==n && gap>v[j]-v[i]){
					gap=v[j]-v[i];
					ans1=v[i];
					ans2=v[j];
				}
			}
		}
		printf("%d %d\n",ans1,ans2);
	}
}
