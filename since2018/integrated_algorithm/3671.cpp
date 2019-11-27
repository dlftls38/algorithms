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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int isprime[10000000];
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
	int ten[9];
	ten[0]=1;
	int round[9];
	round[0]=1;
	int i,j,k;
	for(i=1;i<9;i++){
		ten[i]=ten[i-1]*10;
		round[i]=round[i-1]*i;
	}
	prime(10000000);
	while(n--){
		string s;
		cin>>s;
		int number[10];
		int len=s.length();
		for(i=0;i<len;i++){
			number[i]=s[i]-'0';
		}
		set<int>ans;
		for(i=0;i<round[len];i++){
			for(j=0;j<len;j++){
				int pos=0;
				int temp=0;
				for(k=j;k<len;k++){
					temp+=ten[pos++]*number[k];
				}
				if(isprime[temp]){
					ans.insert(temp);
				}
			}
			next_permutation(number,number+len);
		}
		printf("%d\n",ans.size());
	}
}
