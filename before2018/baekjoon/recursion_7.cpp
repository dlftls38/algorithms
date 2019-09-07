#include <stdio.h>
#include <algorithm>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[2000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	std::sort(a,a+n);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	for(i=n-1;i>-1;i--){
		printf("%d\n",a[i]);
	}
}
