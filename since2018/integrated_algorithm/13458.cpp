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
int a[1000000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b,c;
	scanf("%d%d",&b,&c);
	long long ans=n;
	for(i=0;i<n;i++){
		a[i]-=b;
		if(a[i]<0){
			continue;
		}
		ans+=a[i]/c+(a[i]%c>0?1:0);
	}
	printf("%lld",ans);
}
