#include <stdio.h>

int main(){
	
	int t,n,k,i,j,z,count=0;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%d%d",&n,&k);
		for(j=0;j<n;j++){
			
			scanf("%d",&z);
			
			while(1){
				
				if(z>=k){
					
					z-=k;
					count++;
				}
				else{
					break;
				}
			}
		}
		printf("%d\n",count);
		count=0;
	}
}
