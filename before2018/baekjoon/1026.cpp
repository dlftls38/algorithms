#include <stdio.h>
#include <algorithm>
int main(){
	int i,n,sum=0;
	int a[50];
	int b[50];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
	std::sort(a,a+n);
	std::sort(b,b+n);
	std::reverse(a,a+n);
	for(i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	printf("%d",sum);
} 
