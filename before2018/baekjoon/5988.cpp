#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char a[61]={0};
		scanf("%s",a);
		int len = strlen(a);
		if((a[len-1]-48)%2==0) printf("even\n");
		else printf("odd\n");
	}
}
