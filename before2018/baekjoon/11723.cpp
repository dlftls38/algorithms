#include <stdio.h>
#include <string.h>
int main(){
	int a[21]={0};
	int n;
	scanf("%d",&n);
	char q[2]={0};
	gets(q);
	int i;
	for(i=0;i<n;i++){
		char input[11]={0};
		gets(input);
		if(strncmp(input,"add",3)==0){
			if(strlen(input)==6){
				a[(input[4]-48)*10+input[5]-48]=1;	
			}
			else{
				a[input[4]-48]=1;	
			}
		}
		else if(strncmp(input,"remove",6)==0){
			if(strlen(input)==9){
				a[(input[7]-48)*10+input[8]-48]=0;	
			}
			a[input[7]-48]=0;
		}
		else if(strncmp(input,"check",5)==0){
			if(strlen(input)==8){
				printf("%d\n",a[(input[6]-48)*10+input[7]-48]);
			}
			else{
				printf("%d\n",a[input[6]-48]);	
			}
		}
		else if(strncmp(input,"toggle",6)==0){
			if(strlen(input)==9){
				if(a[(input[7]-48)*10+input[8]-48]==1){
					a[(input[7]-48)*10+input[8]-48]=0;
				}
				else{
					a[(input[7]-48)*10+input[8]-48]=1;
				}
			}
			else{
				if(a[input[7]-48]==1){
					a[input[7]-48]=0;
				}
				else{
					a[input[7]-48]=1;
				}
			}
		}
		else if(strncmp(input,"all",3)==0){
			for(int j=1;j<21;j++){
				a[j]=1;
			}
		}
		else{
			for(int j=1;j<21;j++){
				a[j]=0;
			}
		}
	}
}
