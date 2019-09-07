#include <stdio.h>
int main(){
	int t;
	char a[4];
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		printf("%d\n",a[0]+a[2]-96);
	}
}
