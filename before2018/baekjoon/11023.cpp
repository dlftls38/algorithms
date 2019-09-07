#include <stdio.h>

int main(){
	
	int a=0,i,k=0;
	char n[1000]={0};
	while(1){
		scanf("%c",&n[k]);
		if(n[k]==10){
			break;
		}
		k++;
	}
	for(i=0;i<300;i+=2){
		if(47<n[i]){
			a+=n[i]-48;
		}
	}
	printf("%d",a);
}
