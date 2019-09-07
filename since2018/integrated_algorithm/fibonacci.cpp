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
int a[1000];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	long long a=0;
	long long b=1;
	for(i=0;i<10;i++){
		long long temp=b;
		b+=a;
		a=temp;
	}
}
