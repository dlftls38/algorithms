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
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
long long pows(long long a, long long b){
	long long ans=1;
	while(b>0){
		if(b%2==1){
			ans = (ans * a)%MOD;
		}
		a = (a * a)%MOD;
		b/=2;
	}
	return ans;
}
int main(){
	int x;
	long long n;
	cin>>x>>n;
	vector<int>prime;
	int i,j;
	int temp_x = x;
	for(i=2;i*i<=x;i++){
		if(temp_x%i==0){
			prime.push_back(i);
			while(temp_x%i==0){
				temp_x/=i;
			}
		}
	}
	if(temp_x!=1){
		prime.push_back(temp_x);
	}
	long long ans = 1;
	for(auto it : prime){
		long long temp_n = n;
		long long cnt = 0;
		while(temp_n/it>0){
			cnt += temp_n/it;
			temp_n/=it;
		}
		ans=(ans*pows(it,cnt))%MOD;
	}
	printf("%lld",ans);
}
