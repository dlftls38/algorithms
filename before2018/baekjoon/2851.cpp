#include <stdio.h>
int abs(int a,int b){
	if(a-b<0){
		return b-a;
	}
	else{
		return a-b;
	}
}
int main(){
	int sum=0;
	int i;
	int flag=0;
	for(i=0;i<10;i++){
		int x;
		scanf("%d",&x);
		if(flag==1){
			
		}
		else if(abs(100,sum+x)<=abs(100,sum)){
			sum+=x;
		}
		else{
			flag=1;
		}
	}
	printf("%d",sum);
}
