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
using namespace std;
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(a==b){
		printf("0");
		return 0;
	}
	if(a>b){
		long long temp=a;
		a=b;
		b=temp;
	}
	printf("%lld\n",b-a-1);
	long long i;
	for(i=a+1;i<b;i++){
		printf("%lld ",i);
	}
}
