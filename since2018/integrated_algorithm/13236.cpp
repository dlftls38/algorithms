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
long long lcm(long long a, long long b){
    return a * b / gcd(a,b);
}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld",lcm(a,b));
}
