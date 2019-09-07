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
	int n,k;
	scanf("%d",&n);
	int i,j;
	long long ans=0;
	for(i=1;i<n;i++){
		ans+=1LL*n*i+i;
	}
	printf("%lld",ans);
}
