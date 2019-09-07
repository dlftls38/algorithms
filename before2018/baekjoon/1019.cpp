#include <stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	long long i,j;
	long long a[10]={0};
	for(i=1;i<n+1;i++){
		long long k=i;
		while(1){
			a[k%10]++;
			k/=10;
			if(k==0) break;
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
