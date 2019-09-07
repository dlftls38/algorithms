#include <stdio.h>
#include <algorithm>
long long a[5000000];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	std::sort(a,a+n);
	printf("%lld",a[k-1]);
}
