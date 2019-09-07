#include <stdio.h>
#include <string.h>
int main(){
	int m,i;
	char a[4]={0};
	scanf("%s%d",a,&m);
	int len = strlen(a);
	int q=0;
	for(i=0;i<len;i++){
		q*=10;
		q+=a[i]-48;
	}
	if(q*len>m){
		for(i=0;i<m/len;i++){
			printf("%s",a);
		}
		int k=m%len;
		for(i=0;i<k;i++){
			printf("%c",a[i]);
		}
	}
	else{
		for(i=0;i<q;i++){
			printf("%s",a);
		}
	}
}
