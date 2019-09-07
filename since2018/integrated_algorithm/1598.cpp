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
	int a,b;
	scanf("%d%d",&a,&b);
	int aa=(a-1)%4;
	int bb=(b-1)%4;
	int aaa=a/4+(a%4>0?1:0);
	int bbb=b/4+(b%4>0?1:0);
	printf("%d",abs(aa-bb)+abs(aaa-bbb));
}
