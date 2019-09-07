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
	int n,p;
	scanf("%d%d",&n,&p);
	int i,j;
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%f  %f\n",(double)b/a,(double)b/(a-p));
	}
}
