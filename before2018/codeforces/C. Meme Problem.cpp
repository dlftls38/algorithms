#include <stdio.h>
double abs(double a,double b){
	if(a-b<0){
		return b-a;
	}
	else{
		return a-b;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		double d;
		scanf("%lf",&d);
		double a=d/2;
		double b=d/2;
		int p=0;
		double q=900;
		double w=100;
		int count=0;
		while(1){
			if(abs(a+b,a*b)<=0.000001 && abs(a+b,d)<=0.000001){
				p=0;
				break;
			}
			if(d-a*(b-q)>0.0001)){
				p=1;
				break;
			}
			else{
				
			}
		}
		printf("%lf %lf %lf\n",d,a,b);
		if(p==1){
			printf("N\n");
		}
		else{
			printf("Y %lf %lf\n",a,b);	
		}
	}
}
