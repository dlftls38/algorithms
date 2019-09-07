#include <stdio.h>
int main(){
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		long long l,r;
		scanf("%lld%lld",&l,&r);
		long long answer=0;
		if(l%2==1){
			long long n;
			if(r%2==1){
				n=(r -l +2)/2;
			}
			else{
				n=(r-1 -l +2)/2;
			}
			if(n>0){
				answer-=n*(2*l+2*(n-1))/2;	
			}
		}
		else{
			int n;
			if(r%2==1){
				n=(r -(l+1) +2)/2;
			}
			else{
				n=(r-1 -(l+1) +2)/2;
			}
			if(n>0){
				answer-=n*(2*(l+1)+2*(n-1))/2;	
			}
		}
		if(l%2==0){
			int n;
			if(r%2==0){
				n=(r - l + 2)/2;
			}
			else{
				n=(r-1 - l + 2)/2;
			}
			if(n>0){
				answer+=n*(2*l+2*(n-1))/2;	
			}
		}
		else{
			int n;
			if(r%2==0){
				n=(r - (l+1) + 2)/2;
			}
			else{
				n=(r-1 - (l+1) + 2)/2;
			}
			if(n>0){
				answer+=n*(2*(l+1)+2*(n-1))/2;	
			}
		}
		printf("%lld\n",answer);
	}
}
