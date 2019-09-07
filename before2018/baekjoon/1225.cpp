#include <stdio.h>
#include <string.h>
int main(){
	char a[11000]={0};
	char b[11000]={0};
	scanf("%s%s",a,b);
	int i,j;
	long long sum=0;
	int len=strlen(a);
	int len2=strlen(b);
	for(i=0;i<len;i++){
		for(j=0;j<len2;j++){
			sum+=(a[i]-48)*(b[j]-48);
		}
	}
	printf("%lld",sum);
}
