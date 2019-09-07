#include <stdio.h>
int check[1002],check2[1002],check3[10020];

int main() {
	
	float i,j,n,k,kk;
	int m,mm;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int p=0;
	
	scanf("%f",&n);
	
	for (i=2; i<n; i++){
		
		k = n/i;
		kk=k;
		while(p==0){
			
			if (0<kk && kk<1){
				
				break;
			}
			else if (kk==1){
				
				check[a] = (int)k;
				a+=1;
				break;
			}
			kk -=1;
		}
	}
	for(int i = 0;i<a;i++){
		printf("%d ",check[i]);
	}
	printf("\n");
	a=0;
	printf("1 ");
	for (i=2; i<n; i++){
		check3[b] = (int)i;
		b+=1;
		for(j=1; j<i; j++){
			
			k = i/j;
			kk=k;
			while(p==0){
				
				if (0<kk && kk<1){
				
					break;
				}
				else if (kk==1){
				
					check2[a] = (int)k;
					a+=1;
					break;
				}
			kk -=1;
			}
		}
		for(mm=0; mm<1000; mm++){
			
			for (m=0; m<1000; m++){
				
				if(check2[m]==check[mm] && check2[m]>0 && check[mm]>0){
					
					c+=1;
				}
			}
		}
		for (m=0; m<1000; m++){
			
			check2[m]=0;
		}
		for (m=0; m<1000; m++){
			
			for (mm=1; mm<1000; mm++){
				
				if(check3[m]==check3[mm]){
					
					check3[mm]=0;
				}
			}
		}
		for (m=0; m<1000; m++){
			
			if (c==0 && check3[m]>0){
			
				printf("%d ",check3[m]);
			}
		}
		c=0;
	}
}
