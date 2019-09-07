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
	int n;
	scanf("%d",&n);
	int i;
	int a[100]={0};
	double avg=0;
	double e=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		avg+=a[i];
		e+=1.0*a[i]/n;
	}
	avg/=n;
	if(e==0){
		printf("divide by zero");
	}
	else{
		printf("%.2f",avg/e);
	}
}
