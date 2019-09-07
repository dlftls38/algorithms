#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	long long sum=0;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		sum+=x;
	}
	printf("%lld",sum);
}
