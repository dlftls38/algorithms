#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long long L,v,l,r;
		scanf("%lld%lld%lld%lld",&L,&v,&l,&r);
		
		printf("%lld\n",L/v-r/v+(l-1)/v);
	}
}
