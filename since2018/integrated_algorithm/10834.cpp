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
	int m;
	scanf("%d",&m);
	int i,j;
	int a[1000]={0};
	int b[1000]={0};
	int c[1000]={0};
	for(i=0;i<m;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		int g = __gcd(a[i],b[i]);
		a[i]/=g;
		b[i]/=g;
	}
	int cur=b[0]/a[0];
	int rotate=c[0];
	for(i=1;i<m;i++){
		if(c[i]==1){
			rotate^=1;
		}
		cur = b[i]*(cur/a[i]);
	}
	printf("%d %d",rotate,cur);
}
