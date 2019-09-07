#include <stdio.h>

int main(){
	
	int i,j,k,n=1,w,ww,h,hh,q=0,qq=1,check=0,a=1,b=1;
	
	scanf("%d",&k);
	
	while(1){
		
		if(check==1){
			
			break;
		}
		if(2*n*n-2*n+1==k){
			
			printf("%d/%d",a,b);
			break;
		}
		w=q;
		ww=qq;
		h=2*n*n-2*n+1;
		hh=2*n*n-2*n+1;
		for(i=1;i<n;i++){
			h-=w;
			if(h==k){
				
				if(i%2==0){
					
					printf("%d/%d",a-i,b);
					check=1;
					break;					
				}
				else{
					
					printf("%d/%d",a,b-i);
					check=1;
					break;					
				}
			}
			w--;
		}
		for(i=1;i<n;i++){
			hh-=ww;
			if(hh==k){
				
				if(i%2==0){
					
					printf("%d/%d",a,b-i);
					check=1;
					break;					
				}
				else{
					
					printf("%d/%d",a-i,b);
					check=1;
					break;					
				}
			}
			ww--;
		}
		n++;
		a++;
		b++;
		q+=2;
		qq+=2;
	}
}
