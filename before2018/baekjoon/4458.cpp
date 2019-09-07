#include <stdio.h>
int main(){
	int t;
	char a[31];
	scanf("%d",&t);
	gets(a);
	while(t--){
		gets(a);
		if(65<=a[0] && a[0]<=90);
		else a[0]-=32;
		printf("%s\n",a);
	}
}
