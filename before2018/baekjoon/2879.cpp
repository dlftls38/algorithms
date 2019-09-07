#include <stdio.h>

int main(){
	
	int n,i,j,a[1500]={0},b[1500]={0},count=0,state[1500]={0},now=0,k;
	scanf("%d",&n);
	
	for(i=0;i<2;i++){
		
		for(j=0;j<n;j++){
			
			if(i==0){
				
				scanf("%d",&a[j]);
			}
			
			else{
				
				scanf("%d",&b[j]);
			
				state[j]=a[j]-b[j];
			}
		}
	}
	
	for(i=0;i<n;i++){
		
		if(now == 0){
			if(state[i]==0){
				
			}
			else if(state[i]>0){
				
				now = 1;
				if(state[i+1]>0){
					
					k=i;
				}
				else{
					count += state[i];
					now=0;
				}
			}
			else{
				
				now=-1;
				if(state[i+1]<0){
					
					k=i;
				}
				else{
					count-=state[i];
					now=0;
				}
			}
		}
		else{
			if(state[i]==0){
				count += 1;
				if(now>0){
				
					for(j=k;j<i;j++){
						
						state[j]-=1;
					}
				}
				else if(now<0){
				
					for(j=k;j<i;j++){
						
						state[j]+=1;
					}
				}				
				i=k-1;
				now=0;
			}
			else if(state[i]>0 && now >0){
				if(state[i+1]>0){
					
				}
				else{
					count += 1;
					for(j=k;j<i+1;j++){
						state[j]-=1;
					}
					i=k-1;
					now=0;
				}
			}
			else if (state[i]<0 && now<0){
				if(state[i+1]<0){
					
				}
				else{
					count += 1;
					for(j=k;j<i+1;j++){
						
						state[j]+=1;
					}
					i=k-1;
					now=0;
				}
			}
		}
	}
	printf("%d",count);
	
}
