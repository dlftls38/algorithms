#include <stdio.h>
#include <algorithm>
int main(){
	int n;
	long long a[100001]={0};
	long long b[100001]={0};
	int i,j=1;
	int count=0;
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b[i]=a[i];
	}
	std::sort(a,a+n);
	std::sort(b,b+n);
	for(i=0;i<n && j<n;){
		if(a[i]<a[j] && a[j]!=b[i]){
			count++;
			a[j]=a[i];
			i++;
			j++;
		}
		else{
			j++;
		}
	}
	printf("%d",count);
}
/*
2 2 3 3 3 10
3 3 10 2 3 2
*/
