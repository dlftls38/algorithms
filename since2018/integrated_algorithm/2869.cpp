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
	int a,b,v;
	scanf("%d%d%d",&a,&b,&v);
	v-=a;
	printf("%d",v/(a-b)+1+(v%(a-b)?1:0));
}
