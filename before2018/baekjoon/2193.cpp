#include <stdio.h>
long long count;
int n;
void gogo(int z,int num){
	if(num==n){
		count++;
	}
	else{
		if(z==1){
			gogo(0,num+1);
		}
		else{
			gogo(0,num+1);
			gogo(1,num+1);
		}
	}
}
int main(){
	scanf("%d",&n);
	gogo(1,1);
	printf("%lld",count);
}
