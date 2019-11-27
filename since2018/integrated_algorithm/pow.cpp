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
#define MOD 1000007
using namespace std;
int pow(int a, int b) {
    if (b == 0) {
        return 1;
    }
 
    int n = pow(a, b / 2);
    int temp = n * n;
 
    if (b % 2 == 0) {
        return temp;
    } else {
        return a * temp;
    }
}
long long power(long long x,long long y){
	long long ans=1;
	while(y>0){
		if(y%2==1){
			ans = ans * x % MOD;
		}
		x = x * x % MOD;
		y/=2;
	}
	return ans;
}
int main(){
	printf("%lld",power(2,3));
}
