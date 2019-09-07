#include <stdio.h>

int main(){
	
	int t,n,i,j,z,count=0;
	int a[110]={0};
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%d",&n);
		for(j=1;j<n+1;j++){
			
			a[j]=1;
		}
		for(j=2;j<n+1;j++){
			
			for(z=j;z<n+1;z+=j){
				
				if(a[z]==0){
					
					a[z]=1;
				}
				else{
					
					a[z]=0;
				}
			}
		}
		for(j=1;j<n+1;j++){
			
			if(a[j]==1){
				
				count++;
			}
		}
		printf("%d\n",count);
		for(j=1;j<n+1;j++){
			a[j]=0;
		}
		count=0;
			
	}
	
}
