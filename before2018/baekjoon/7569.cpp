#include <stdio.h>

int first[102][102][102],after[102][102][102];

int main(){
	
	int m,n,h,i,j,z,toicx=0,day=0,change=0;
	
	scanf("%d%d%d",&m,&n,&h);
	
	for(i=0;i<102;i++){
		
		for(j=0;j<102;j++){
			
			for(z=0;z<102;z++){
				
				first[i][j][z]=-1;
			}
		}
	}	
	for(i=1;i<h+1;i++){
		
		for(j=1;j<n+1;j++){
			
			for(z=1;z<m+1;z++){
				
				scanf("%d",&first[i][j][z]);
				after[i][j][z]=first[i][j][z];
			}
		}
	}	
	while(1){
		
		for(i=1;i<h+1;i++){
			
			for(j=1;j<n+1;j++){
				
				for(z=1;z<m+1;z++){
					
					if(first[i][j][z]==1){
						
						if(first[i][j][z+1]==0){
							
							after[i][j][z+1]=1;
							change++;
						}
						if(first[i-1][j][z]==0){
							
							after[i-1][j][z]=1;
							change++;
						}
						if(first[i+1][j][z]==0){
							
							after[i+1][j][z]=1;
							change++;
						}
						if(first[i][j-1][z]==0){
							
							after[i][j-1][z]=1;
							change++;
						}
						if(first[i][j+1][z]==0){
							
							after[i][j+1][z]=1;
							change++;
						}
						if(first[i][j][z-1]==0){
							
							after[i][j][z-1]=1;
							change++;
						}
					}
					if(first[i][j][z]==0){
						
						toicx++;
					}					
				}
			}
		}
		if(day==0 && toicx==0){
			
			printf("0");
			break;
		}
		if(toicx>0 && change==0){
			
			printf("-1");
			break;
		}
		if(toicx==0){
			
			printf("%d",day);
			break;
		}

		day++;
		change=0;
		toicx=0;
		for(i=1;i<h+1;i++){
			
			for(j=1;j<n+1;j++){
				
				for(z=1;z<m+1;z++){
					
					first[i][j][z]=after[i][j][z];
				}
			}
		}	
	}
}
