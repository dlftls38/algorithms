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
int main(){
	long long c1;
	scanf("%lld",&c1);
	int n=1;
	while(c1!=1){
		if(c1%2==0){
			c1/=2;
		}
		else{
			c1=c1*3+1;
		}
		n++;
	}
	printf("%d",n);
}
