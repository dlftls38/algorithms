#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
		int i;
		double sum=0;
		double a[1200]={0};
		for(i=0;i<x;i++){
			double k=0;
			scanf("%lf",&k);
			a[i]=k;
			sum+=k;
		}
		sum/=x;
		int count=0;
		for(i=0;i<x;i++){
			if(a[i]>sum){
				count++;
			}
		}
		printf("%.3lf%\n",double(count)/x*100);
	}
}
