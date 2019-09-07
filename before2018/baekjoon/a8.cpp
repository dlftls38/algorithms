#include <stdio.h>

int main(){
	
	int k,n,i,j,r,number[1][4];
	
	scanf("%d",&n);
	
	for(i=2; i<n+1; i++){
		
		if(n%i==0){
			
			k+=1;
		}
	}
	if(k==1){
		
		k=0;
		
		if(999<n && n<10000){
			
			number[0][0]=n/1000;
			number[0][1]=(n-n/1000*1000)/100;
			number[0][2]=(n-n/1000*1000-(n-n/1000*1000)/100*100)/10;
			number[0][3]=(n-n/1000*1000-(n-n/1000*1000)/100*100-(n-n/1000*1000-(n-n/1000*1000)/100*100)/10*10);
			r=number[0][0]+number[0][1]*10+number[0][2]*100+number[0][3]*1000;
			
			for(i=2; i<r+1; i++){
				
				if(r%i==0){
					
					k+=1;
				}
			}
			
			if(k==1){
				
				printf("emirp");
			}
			
			else {
				
				printf("prime");
			}
		}
		
		else if(99<n && n<1000){
			
			number[0][0]=n/100;
			number[0][1]=(n-n/100*100)/10;
			number[0][2]=(n-n/100*100-(n-n/100*100)/10*10);
			r=number[0][0]+number[0][1]*10+number[0][2]*100;
			
			for(i=2; i<r+1; i++){
				
				if(r%i==0){
					
					k+=1;
				}
			}
			
			if(k==1){
				
				printf("emirp");
			}
			
			else {
				
				printf("prime");
			}			
		}
		
		else if(9<n && n<100){
			
			number[0][0]=n/10;
			number[0][1]=(n-n/10*10);
			r=number[0][0]+number[0][1]*10;
			
			for(i=2; i<r+1; i++){
				
				if(r%i==0){
					
					k+=1;
				}
			}
			
			if(k==1){
				
				printf("emirp");
			}
			
			else {
				
				printf("prime");
			}			
		}
		
		else {
			
			for(i=2; i<n+1; i++){
				
				if(n%i==0){
					
					k+=1;
				}
			}
			
			if(k==1){
				
				printf("emirp");
			}
			
			else {
				
				printf("prime");
			}			
		}			
		
	}
	
	else {
		
		printf("composite");
	}
}
