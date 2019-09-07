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
int a[100001];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans=0;
	for(i=0;i<n;i++){
		ans+=a[i]/k;
		ans+=a[i]%k>0?1:0;
	}
	printf("%d",ans/2+ans%2);
}
