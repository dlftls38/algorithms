#include <stdio.h>

int num[2000][2000];
int main() {
	
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	for (i=0; i<n; i++){
		
		for (j=0; j<m; j++){
			
			scanf("%d",&num[i][j]);
		}
	}
	
	for (i=0; i<n; i++){
		
		for (j=0; j<m; j++){
			
			if (num[i][j]%2==0){
				
				printf("(%d, %d) ",i+1,j+1);
			}
		}
	}
	
}
