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
#define MOD 987654321
using namespace std;
typedef pair<int,int> pii;
int c[10001]={0};
int solve(int cur){
	if(cur==0){
		return 1;
	}
	int &ret = c[cur];
	if(ret!=-1){
		return ret;
	}
	ret=0;
	for(int i=2;i<=cur;i+=2){
		ret = (ret + (1LL*solve(cur-i) * solve(i-2))%MOD)%MOD;
	}
	return ret;
}
int main(){
	int n;
    scanf("%d", &n);
    int i,j;
    memset(c,-1,sizeof(c));
    printf("%d",solve(n));
}
