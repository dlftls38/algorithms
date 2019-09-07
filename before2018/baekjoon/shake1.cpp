#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		double r;
		int a[4]={0};
		for(j=0;j<4;j++){
			scanf("%lf",&r);
			a[j]=r*100;
		}
		int point =0;
		for(j=0;j<4;j++){
			if(a[j]==0){
				point=1;
			}
		}
		int sum=0;
		for(j=0;j<4;j++){
			sum+=a[j];
		}
		int sosu;
		sum/=4;
		sosu=sum;
		sosu%=100;
		sum-=sosu;
		if(point==1){
			printf("NOT ATTENDED\n");
		}
		else if(sosu<25){
			printf("%d.0\n",sum/100);
		}
		else if(sosu>=25 && sosu<75){
			printf("%d.5\n",sum/100);
		}
		else{
			sosu/=10;
			if(sosu>=5){
				printf("%d.0\n",sum/100+1);
			}
			else{
				printf("%d.0\n",sum/100);
			}
		}
	}
}
