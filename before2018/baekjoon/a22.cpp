#include <stdio.h>

int check[20000],check2[20000],check3[20000];
int main() {
	
	int n,i,j,k;
	int b=0;
	int c=0;
	int e=0;
	
	scanf("%d",&n);
	
	for (i=2; i<n; i++){
		
		if (n%i==0){
			
			check[b] = i;
			b+=1;
		}
	}
	b=0;
	for (i=2; i<n; i++){
		
		for(j=2; j<i+1; j++){
			
			if (i%j==0){
				
				check2[b] = j;
				b+=1;
			}
		}
		b=0;
		for(j=0; j<n/2; j++){
			
			for(k=0; k<n/2; k++){
				
				if (check[j]==check2[k] && check[j]>0 && check2[k]>0){
					
					c+=1;
				}
			}
		}
		if (c==0){
			
			check3[e]=i;
			e+=1;
		}
		for (j=0; j<1000; j++){
			
			check2[j]=0;
		}
		c=0;
	}
	printf("1 ");
	
	for(i=0; i<1000; i++){
		
		if(check3[i]>0){
			
			printf("%d ",check3[i]);
		}
	}
}
