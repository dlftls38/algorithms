#include <stdio.h>

int k[500];
int main(){
	
	int t,n,i,j;
	int a=0;
	int b=0;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%d",&n);
		for(j=0;j<n;j++){
			
			scanf("%d",&k[j]);
			if(k[j] % 2 == 1){
				
				a += k[j];
			}
			
			else{
				
				b += k[j];
			}
		}
		printf("%d %d\n",b,a);
		a=0;
		b=0;
		int k[500];
		
	}
}
