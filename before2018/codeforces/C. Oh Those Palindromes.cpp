#include <stdio.h>
char s[1000001];
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",s);
	int a[200]={0};
	for(int i=0;i<n;i++){
		a[s[i]]++;
	}
	for(int i=97;i<123;i++){
		for(int j=0;j<a[i];j++){
			printf("%c",i);
		}
	}
}
