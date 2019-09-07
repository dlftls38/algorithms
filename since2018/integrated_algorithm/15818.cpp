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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int ans=1;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		ans=1LL*ans*x%m;
	}
	printf("%d",ans);
}
