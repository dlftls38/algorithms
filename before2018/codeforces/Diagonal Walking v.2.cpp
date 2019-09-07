#include <stdio.h>
int main(){
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		long long n,m,k;
		scanf("%lld%lld%lld",&n,&m,&k);
		long long big,small;
		if(n>m){
			big=n;
			small=m;
		}
		else{
			big=m;
			small=n;
		}
		if(k<big){
			printf("-1\n");
		}
		else if((big-small)%2==1){
			printf("%lld\n",k-1);
		}
		else{
			if((k-big)%2==1){
				printf("%lld\n",k-2);
			}
			else{
				printf("%lld\n",k);
			}
		}
		
	}
}
