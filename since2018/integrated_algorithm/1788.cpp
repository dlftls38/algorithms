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
#define MOD 1000000000
using namespace std;
typedef pair<int,int> pii;
int a[1000001];
int b[1000001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	a[1]=1;
	for(i=2;i<1000001;i++){
		a[i]=(a[i-1]+a[i-2])%MOD;
	}
	b[1]=1;
	for(i=2;i<1000001;i++){
		b[i]=(b[i-2]-b[i-1])%MOD;
	}
	if(n>=0){
		if(a[n]>0){
			printf("1\n");
		}
		else if(a[n]==0){
			printf("0\n");
		}
		else{
			printf("-1\n");
		}
		printf("%d",abs(a[n]));
	}
	else{
		if(b[-n]>0){
			printf("1\n");
		}
		else if(b[-n]==0){
			printf("0\n");
		}
		else{
			printf("-1\n");
		}
		printf("%d",abs(b[-n]));
	}
}
