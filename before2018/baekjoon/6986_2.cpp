#include <cstdio>
#include <algorithm>
int main(){
	int n,k,i;
	long long a[100000],q=0,w=0;
	float m;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%f",&m),a[i]=(long long)(m*1000);
	std::sort(a,a+n);
	for(i=k;i<n-k;i++) q+=a[i];
	q/=n-2*k;
	if(q%10>4) q+=10;
	for(i=0;i<k;i++) a[i]=a[k];
	for(i=n-k;i<n;i++) a[i]=a[n-k-1];
	for(i=0;i<n;i++) w+=a[i];
	w/=n;
	if(w%10>4) w+=10;
	printf("%lld.",q/1000);
	printf("%d%d\n",(q%1000)/100,(q%100)/10);
	printf("%lld.",w/1000);
	printf("%d%d",(w%1000)/100,(w%100)/10);
}
