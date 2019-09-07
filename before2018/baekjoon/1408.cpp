#include <stdio.h>
int main(){
	int a[3]={0};
	int b[3]={0};
	int i,j;
	scanf("%d:%d:%d",&a[0],&a[1],&a[2]);
	scanf("%d:%d:%d",&b[0],&b[1],&b[2]);
	for(i=0;i<3;i++){
		b[i]-=a[i];
	}
	b[2]+=60;
	b[1]+=59;
	b[0]+=23;
	if(b[2]>=60){
		b[1]+=b[2]/60;
		b[2]%=60;
	}
	if(b[1]>=60){
		b[0]+=b[1]/60;
		b[1]%=60;
	}
	if(b[0]>=24){
		b[0]%=24;
	}
	for(i=0;i<3;i++){
		if(b[i]<10){
			printf("0%d",b[i]);
		}
		else{
			printf("%d",b[i]);
		}
		if(i!=2){
			printf(":");
		}
	}
}
