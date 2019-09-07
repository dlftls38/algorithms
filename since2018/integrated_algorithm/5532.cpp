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
	int l,a,b,c,d;
	scanf("%d%d%d%d%d",&l,&a,&b,&c,&d);
	printf("%d",l-max(a/c+(a%c>0?1:0),b/d+(b%d>0?1:0)));
}
