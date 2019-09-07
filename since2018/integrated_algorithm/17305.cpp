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
long long b[250001];
long long c[250001];
int main(){
	int n,w;
	scanf("%d%d",&n,&w);
	int i,j;
	int tail1=1,tail2=1;
	for(i=0;i<n;i++){
		int t,s;
		scanf("%d%d",&t,&s);
		if(t==3){
			b[tail1++]=s;
		}
		else{
			c[tail2++]=s;
		}
	}
	b[0]=1000000000000000000;
	c[0]=1000000000000000000;
	sort(b,b+tail1);
	reverse(b,b+tail1);
	sort(c,c+tail2);
	reverse(c,c+tail2);
	b[0]=0;
	c[0]=0;
	for(i=2;i<tail1;i++){
		b[i]+=b[i-1];
	}
	for(i=1;i<tail2;i++){
		c[i]+=c[i-1];
	}
	long long ans=0;
	for(i=0;i<=w;i++){
		ans=max(ans,b[min(i/3,tail1-1)]+c[(w-i)/5]);
	}
	printf("%lld",ans);
}
