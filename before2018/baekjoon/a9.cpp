#include <stdio.h>

int main (){
	
	int n,m,i,j,number[1000];
	int t=0;
	int tt=1;
	
	scanf("%d%d",&n,&m);
	
	for(i=0; i<n*m; i++){
		
		scanf("%d",&number[i]);
	}
	
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
			printf("%d ",number[m*n-m*tt+t]);
			tt+=1;
		}
		printf("\n");
		t+=1;
		tt=1;
	}
}






