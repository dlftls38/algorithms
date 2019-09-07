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
long long gcd(long long a, long long b){
	while(b!=0){
		long long r = a%b;
		a= b;
		b= r;
	}
	return a;
}
long long input[400000];
int main(){
	int n;
	scanf("%d",&n);
	long long i,j;
	for(i=0;i<n;i++){
		scanf("%lld",&input[i]);
	}
	long long cur=input[0];
	for(i=1;i<n;i++){
		cur=gcd(cur,input[i]);
	}
	int ans=0;
	for(i=1;i*i<cur;i++){
        if(cur%i==0){
        	ans+=2;
        }
	}
    if(i*i==cur)
        ans++;
    printf("%d",ans);
}
