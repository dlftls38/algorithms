#include <stdio.h>
int main(){
	int n;
	int check[10]={0};
	scanf("%d",&n);
	int count=0;
	while(1){
		if(n<10){
			if(check[n]==1){
				break;
			}
			else{
				check[n]++;
			}
		}
		//printf("%d\n",n);
		count++;
		n++;
		while(n%10==0){
			n/=10;
		}
	}
	printf("%d",count);
} 