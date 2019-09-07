#include <cstdio>
#include <algorithm>
int main(){
	int n,k,i;
	float a[100000],q=0,w=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%f",&a[i]);
	std::sort(a,a+n);
	for(i=k;i<n-k;i++) q+=a[i];
	q/=n-2*k;
	printf("%.2f\n",q);
	for(i=0;i<k;i++) a[i]=a[k];
	for(i=n-k;i<n;i++) a[i]=a[n-k-1];
	for(i=0;i<n;i++) w+=a[i];
	w/=n;
	printf("%.2f",w);
}
