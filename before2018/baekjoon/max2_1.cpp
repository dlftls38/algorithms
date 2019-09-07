#include <stdio.h>
#include <algorithm>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[10000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	std::sort(a,a+n);
	std::reverse(a,a+n);
	printf("%d",a[0]+a[1]);
}
