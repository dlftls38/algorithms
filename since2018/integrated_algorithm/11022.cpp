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
	int t;
	scanf("%d",&t);
	int c=1;
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("Case #%d: %d + %d = %d\n",c,a,b,a+b);
		c++;
	}
}
