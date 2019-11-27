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
int a[212121];
long long solve(int s,int e){
	if(e-s==1){
		if(a[s]<0){
			return 1;
		}
		else{
			return 0;
		}
	}
	int mid=(s+e)/2;
	long long l=0,r=0;
	l+=solve(s,mid);
	r+=solve(mid,e);
	int i;
	int cnt=0;
	for(i=s;i<e;i++){
		if(a[i]<0)cnt++;
	}
	return l+r+cnt/2+cnt%2;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",solve(0,n));
}
