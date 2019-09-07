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
int a[101];
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int dist=INT_MAX;
	for(i=1;i<=n;i++){
		if(a[i]!=0 && a[i]<=k && dist>abs(m-i)){
			dist=abs(m-i);
		}
	}
	printf("%d",dist*10);
}
