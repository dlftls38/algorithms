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
	long long n;
	scanf("%lld",&n);
	n%=1500000;
	int i,j;
	int a=0,b=1,temp;
	for(i=1;i<n;i++){
		temp=a;
		a=b;
		b+=temp;
		b%=1000000;
	}
	printf("%d",b);
}
