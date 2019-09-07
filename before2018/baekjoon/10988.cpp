#include <stdio.h>
#include <string.h>
int main(){
	
	char a[110]={0};
	int len,i,j,k=1;
	scanf("%s",a);
	len = strlen(a);
	
	if(len%2==0){
		
		for(i=0;i<len/2;i++){
			
			if(a[i]==a[len-i-1]){
			}
			else{
				k=0;
				break;
			}
		}
	}
	else{
		
		for(i=0;i<len/2;i++){
			
			if(a[i]==a[len-1-i]){
			}
			else{
				k=0;
				break;
			}
		}
	}
	printf("%d",k);
}
