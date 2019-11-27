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
#define MOD 1000000007
using namespace std;
int isprime[30000000];
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
	int x;
	long long n;
	cin>>x>>n;
	int i,j;
	vector<int>temp;
	for(i=1;i*i<=x;i++){
		if(x%i==0){
			temp.push_back(x/i);
			temp.push_back(i);
		}
	}
	sort(temp.begin(),temp.end());
	reverse(temp.begin(),temp.end());
	int size=temp.size();
	int max_val=0;
	for(i=0;i<size;i++){
		int cnt=0;
		for(j=i;j<size;j++){
			if(temp[i]%temp[j]==0){
				cnt++;
			}
		}
		if(cnt==2){
			max_val=temp[i];
			break;
		}
	}
	prime(max_val);
	set<long long>s;
	for(i=2;i<=max_val;i++){
		if(isprime[i] && x%i==0){
			printf("%d\n",i);
			long long cur=i;
			long long origin=i;
			while(n>=cur){
				s.insert(cur);
				cur*=origin;
				if(n<cur){
					break;
				}
			}
		}
	}
	long long ans=1;
	for(auto it : s){
		printf("%lld\n",it);
		ans*=it;
		ans%=MOD;
	}
	printf("%lld",ans);
}
