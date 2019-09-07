#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
long long sum[100002];
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	int i;
	long long nn=n;
	n-=(k+1)*k/2;
	if(n<0){
		printf("NO");
	}
	else{
		for(i=0;i<k;i++){
			if(i!=0 && (n/(k-i)+i+sum[i])>(i-1+sum[i-1])*2){
				sum[i]+=(i)*2-(i+1);
				sum[i+1]=sum[i];
				n-=((i)*2-(i+1))*(k-i);
			}
			else{
				sum[i]+=n/(k-i);
				sum[i+1]=sum[i];
				n-=n/(k-i)*(k-i);
			}
		}
		long long result=0;
		for(i=0;i<k;i++){
			result+=i+1+sum[i];
		}
		if(result<nn){
			printf("NO");
		}
		else{
			printf("YES\n");
			for(i=0;i<k;i++){
				printf("%d ",i+1+sum[i]);
			}
		}
	}
}
