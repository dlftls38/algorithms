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
using namespace std;
int main(){
	int n;
	long long a=0;
	long long b=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long temp=a;
		a=b;
		b=temp;
		b+=a;
	}
	printf("%lld",a);
}
