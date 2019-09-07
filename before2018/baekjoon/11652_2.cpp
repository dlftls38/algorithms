#include <stdio.h>
#include <algorithm>
long long a[1000000];
int b[1000000];
int main(){
	int n,i,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b[i]++;
	}
	std::sort(a,a+n);
	for(i=0;i<n-1;i++){
		if(a[k]==a[i+1]){
			b[k]++;
		}
		else{
			k=i+1;
		}
	}
	int max=0;
	int maxindex=0;
	for(i=n-1;i>-1;i--){
		if(max<=b[i]){
			max=b[i];
			maxindex=i;
		}
	}
	printf("%lld",a[maxindex]);
}
