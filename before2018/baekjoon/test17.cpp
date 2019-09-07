#include <stdio.h>
#include <algorithm>
int main(){
	char a[100];
	scanf("%s",a);
	int n;
	scanf("%d",&n);
	std::sort(a,a+n);
	printf("%s",a);
}
