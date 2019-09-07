#include <stdio.h>

int main(){
	
	int n;
	int m=1;
	int count=1;
	int hap=2;
	
	scanf("%d",&n);
	
	while(count!=n){
		
		if (count%5==1){
			
			m-=hap;
		}
		
		if (count%5==2){
			
			m+=hap;
		}
		
		if (count%5==3){
			
			m+=hap;
		}
		
		if (count%5==4){
			
			m-=hap;
		}
		
		if (count%5==0){
			
			m+=hap;
		}
		
		hap++;
		count++;
	}
	
	printf("%d",m);
}
