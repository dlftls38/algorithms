#include <stdio.h>

int main() {
	
	int r[12][12],i,j;
	
	for (i=1; i<11; i++){
		
		for (j=1; j<11; j++){
			
			scanf("%d",&r[i][j]);
		}
	}
	
	for (i=1; i<11; i++){
		
		for (j=1; j<11; j++){
			
			if (r[i][j]==1){
				
				r[i][j]=10;
			}
		}
	}
	for (i=1; i<11; i++){
		
		for (j=1; j<11; j++){
			
			if (r[i][j]==10){
				
				if (r[i+1][j]==10){
				}
				else {
					r[i+1][j]+=1;
				}
				if (r[i+1][j+1]==10){
				}
				else {
					r[i+1][j+1]+=1;
				}
				if (r[i][j+1]==10){
				}
				else {
					r[i][j+1]+=1;
				}
				if (r[i-1][j+1]==10){
				}
				else {
					r[i-1][j+1]+=1;
				}
				if (r[i-1][j]==10){
				}
				else {
					r[i-1][j]+=1;
				}
				if (r[i-1][j-1]==10){
				}
				else {
					r[i-1][j-1]+=1;
				}
				if (r[i][j-1]==10){
				}
				else {
					r[i][j-1]+=1;
				}
				if (r[i+1][j-1]==10){
				}
				else {
					r[i+1][j-1]+=1;
				}
			}
		}
	}
	
	for (i=1; i<11; i++){
		
		for (j=1; j<11; j++){
			if (r[i][j]==10){
				
				printf("* ");
			}
			else {
				
				printf("%d ",r[i][j]);
			}
		}
		printf("\n");
	}
}
