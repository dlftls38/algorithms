#include <stdio.h>
int main(){
	int x,n,result=1;
	scanf("%d %d",&x,&n);
	if(n%2==0){
		if(n!=0){
			result*=x;
		}
		while(n>1){
			if(n%2==1){
				result*=x;
			}
			result*=result;
			n/=2;
		}
	}
	else{
		while(n>0){
			result*=result;
			if(n%2==1){
				result*=x;
			}
			n/=2;
		}	
	}
	printf("%d",result);
}
