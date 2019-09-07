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
	for(i=0;i<n;i++){
			
		for(j=0;j<n;j++){
					
			for(z=0;z<n;z++){
						
				if(before[j][i]==1 && before[i][z]){
							
					before[j][z]=1;
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
