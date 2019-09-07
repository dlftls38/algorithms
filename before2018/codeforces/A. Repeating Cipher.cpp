#include <stdio.h>
int main(){
	int n;
	char a[60]={0};
	scanf("%d%s",&n,a);
	int count=0;
	for(int i=0;i<n;i++){
		printf("%c",a[i]);
		i+=count;
		count++;
	}
}
