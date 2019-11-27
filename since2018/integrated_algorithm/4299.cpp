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
	int c,d;
	scanf("%d%d",&c,&d);
	int e=c-d;
	e/=2;
	int f=c-e;
	if(f>e){
		swap(e,f);
	}
	if(e+f==c && e-f==d && e>=0 && f>=0){
		printf("%d %d",e,f);
	}
	else{
		printf("-1");
	}
}
