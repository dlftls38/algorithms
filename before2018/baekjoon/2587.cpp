#include <stdio.h>
#include <algorithm>
int main(){
	int a[5];
	int i,j;
	int sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	std::sort(a,a+5);
	printf("%d\n%d",sum/5,a[2]);
}
