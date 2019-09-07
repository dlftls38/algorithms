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
	int a,b;
	scanf("%d%d",&a,&b);
	prime(b);
	vector<int>p;
	int i,j;
	for(i=2;i<=b;i++){
		if(isprime[i]==1){
			p.push_back(i);
		}
	}
	int size=p.size();
	int ans=0;
	for(i=a;i<=b;i++){
		int temp=i;
		int cnt=0;
		for(j=0;j<size && temp>1;j++){
			while(temp%p[j]==0){
				temp/=p[j];
				cnt++;
			}
		}
		if(isprime[cnt]==1){
			ans++;
		}
	}
	printf("%d",ans);
}
