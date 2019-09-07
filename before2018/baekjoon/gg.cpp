#include <stdio.h>

int main(){
	
	int t,n,i,j,m,b;
	
	scanf("%d",&t);
	
	for(i=1;i<t+1;i++){

		int k[505]={0};
		
		for(j=1;j<i+1;j++){
			scanf("%d",&k[j]);
		}
		for(j=0;j<i-1;j++){
			
			for(m=1;m<i;m++){
				
				if(k[m]>k[m+1]){
					int temp = k[m];
					k[m] = k[m+1];
					k[m+1] = temp;
				}
			}
		}
		if(i % 2 == 1){
			
			printf("%d\n",k[(i/2)+1]);
		}
		
		else{
			
			printf("%d\n",k[i/2]);
		}
	}
}

