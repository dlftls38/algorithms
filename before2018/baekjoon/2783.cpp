#include <stdio.h>
int main(){
	double x,y;
	scanf("%lf%lf",&x,&y);
	double sum=1000*x/y;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&x,&y);
		if(1000*x/y<sum){
			sum=1000*x/y;	
		}
	}
	printf("%.2lf",sum);
}
