#include <stdio.h>

int before[105][105],n,after[105][105];
int main(){
	
	int i,j,z,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			scanf("%d",&before[i][j]);
		}
	}
	for(k=0;k<n;k++){
		
		for(i=0;i<n;i++){
			
			for(j=0;j<n;j++){
				
				if(before[i][j]==1){
					
					for(z=0;z<n;z++){
						
						if(before[j][z]==1){
							
							before[i][z]=1;
						}
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			printf("%d ",before[i][j]);
		}
		printf("\n");
	}
}
