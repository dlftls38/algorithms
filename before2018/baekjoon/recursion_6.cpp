#include <stdio.h>
#include <algorithm>
int main(){
	long long n,m,i;
	long long  x=1;
	scanf("%d%lld",&n,&m);
	for(i=2;i<n+1;i++){
		x*=i;
	}
	int a[20]={0};
	for(i=1;i<n+1;i++){
		a[i-1]=i;
	}
	long long time=(m-1)%x;
	for(i=0;i<time;i++){
		std::next_permutation(a,a+n);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
