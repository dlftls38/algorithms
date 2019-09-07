#include <stdio.h>
int main(){
	int a,sum=0,max=1000000,flag=0;
	for(int i=0;i<7;i++){
		scanf("%d",&a);
		if(a%2==1){
			sum+=a;
			if(max>a){
				max=a;
			}
			flag=1;
		}
	}
	if(flag==0){
		printf("-1");
	}
	else{
		printf("%d\n%d",sum,max);
	}
}
