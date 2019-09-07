#include <stdio.h>
#include <algorithm>
int main(){
	int n,a[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	std::sort(a,a+n);
	if(n==1) printf("%d",a[0]*a[0]);
	else printf("%d",a[0]*a[n-1]);
}
