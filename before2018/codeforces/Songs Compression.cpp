#include <stdio.h>
#include <algorithm>
using namespace std;
long long a[1000000];
int main(){
	int n;
	long long m;
	scanf("%d%lld",&n,&m);
	int i;
	long long now=0;
	for(i=0;i<n;i++){
		long long q,w;
		scanf("%lld%lld",&q,&w);
		a[i]=q-w;
		now+=q;
	}
	sort(a,a+n);
	reverse(a,a+n);
	i=0;
	while(now>m){
		if(i==n) break;
		now-=a[i++];
	}
	if(now<=m){
		printf("%d",i);
	}
	else{
		printf("-1");
	}
}
