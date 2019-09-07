#include <stdio.h>

int main(){
	
	int n,i,j,k,a[10100]={0},top=0,stack[10000]={0},g=0,sum=0;
	
	scanf("%d",&n);
	a[1]=1;
	a[2]=1;
	a[3]=1;
	for(i=4;i<10001;i++){
		
		for(j=1;j<i;j++){
			
			if(i%j==0){
				
				for(k=0;k<top;k++){
					
					if(stack[k]==j){
						
						g=1;
						break;
					}
				}
				if(g==1){
					g=0;
				}
				else{
					
					a[i]++;
					stack[top++]=i/j;	
				}
			}
		}
		for(j=0;j<top;j++){
			
			stack[j]=0;
		}
		top=0;
	}
	for(i=1;i<n+1;i++){
		
		sum+=a[i];
	}
	printf("%d",sum);
	
}
