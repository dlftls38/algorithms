#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=0,b=0;
	scanf("%d",&a);
	long long sum=a;
	long long result_sum=a;
	int result_count=1;
	int count=1;
	for(int i=0;i<n-1;i++){
		scanf("%d",&b);
		if(b>=a){
			sum+=b;
			count++;
		}
		else{
			count=1;
			sum=b;
		}
		if(count>result_count){
			result_count=count;
			result_sum=sum;
		}
		a=b;
	}
	printf("%d %lld",result_count,result_sum);
}
