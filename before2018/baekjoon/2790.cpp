#include "cstdio"
#include "algorithm"
int a[300000],n,s,i,max,k;
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	std::sort(a,a+n);
	for(i=n-1;i>-1;i-- && k++){
		if(a[i]+n>max) s++;
		max=max>a[i]+k?max:a[i]+k;
	}
	printf("%d",s);
}
