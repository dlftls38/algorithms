#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	long long a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(b>=c){
		printf("-1");
		return 0;
	}
	else{
		printf("%d",a/(c-b)+1);
	}
}
