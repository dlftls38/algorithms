#include <stdio.h>
#include <algorithm>
char a[1000][1000];
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	std::sort(a[0],a[0]+n);
	printf("%s",a[0]);
}
