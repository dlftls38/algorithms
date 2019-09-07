#include <stdio.h>

int main(){
	long long file[1010]={0};
	long long n,i;
	long long cluster;
	long long prt=0;
	
	scanf("%lld",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%lld",&file[i]);
	}
	scanf("%lld",&cluster);
	for(i=0;i<n;i++){
		if(file[i]%cluster>0){
			
			prt+=((file[i]/cluster)+1)*cluster;
		}
		else{
			
			prt+=(file[i]/cluster)*cluster;
		}
		
	}
	printf("%lld",prt);
	
}
