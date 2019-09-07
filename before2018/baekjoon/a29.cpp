#include<stdio.h>

int main(){
	
	int a,b,c,d,i,j,m,n,mm,nn;
	int k=0;
	
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>c){
		
		m=c;
		mm=a;	
	}
	
	else {
		
		m=a;
		mm=c;
	}
	
	if(b>d){
		
		n=d;
		nn=b;	
	}
	
	else {
		
		n=b;
		nn=d;
	}
	if ((mm-m)%2==0 && (nn-n)%2==0){
		
		for(i=m; i<(mm/2)+1; i++){
		
			for(j=n; j<(nn/2)+1; j++){
			
				if((c-a)*(j-b)==(d-b)*(i-a)){
				
					k+=1;
				}
			}
		}		
	}
	
	else {
		
		for(i=m; i<(mm/2); i++){
		
			for(j=n; j<(nn/2); j++){
			
				if((c-a)*(j-b)==(d-b)*(i-a)){
				
					k+=1;
				}
			}
		}		
	}	
	
	if((mm-m)%2==0 && (nn-n)%2==0){
		
		printf("%d",k*2+1);
	}
	
	else {
		
		printf("%d",k*2);
	}
}
