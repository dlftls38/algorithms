#include <stdio.h>
long long a[1000001];
long long s[1000001];
int k1[10001];
int top;
long long change[1000001];
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int i,j;
	for(i=1;i<n+1;i++){
		scanf("%lld",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(i=0;i<m+k;i++){
		int q,w;
		long long e;
		scanf("%d%d%lld",&q,&w,&e);
		if(q==1){
			k1[top++]=w;
			change[w]=e;
		}
		else{
			long long sum=s[e]-s[w-1];
			if(sum<=0){
				sum=s[w]-s[e-1];
				for(j=0;j<top;j++){
					if(k1[j]<=w && k1[j]>=e){
						sum+=change[k1[j]]-a[k1[j]];
					}
				}
			}
			else{
				for(j=0;j<top;j++){
					if(k1[j]<=e && k1[j]>=w){
						sum+=change[k1[j]]-a[k1[j]];
					}
				}
			}
			printf("%lld\n",sum);
		}
	}
}

