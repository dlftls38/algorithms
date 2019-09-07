#include <stdio.h>
int main(){
	long long k=1;
	int a,i;
	for(i=0;i<3;i++){
		scanf("%d",&a);
		k*=a;
	}
	int q[10]={0};
	int flag=0;
	long long u=100000000000;
	for(i=0;i<20;i++){
		if(k/u>0){
			flag=1;
		}
		if(flag==1){
			q[k/u]++;
			k%=u;
		}
		u/=10;
		if(u==0){
			break;
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",q[i]);
	}
}
