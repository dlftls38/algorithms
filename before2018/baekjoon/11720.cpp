#include <stdio.h>
int main(){
	char a[101];
	int i,s=0,n;
	scanf("%d%s",&n,a);
	for(i=0;i<n;i++){
		s+=a[i]-48;
	}
	printf("%d",s);
}
