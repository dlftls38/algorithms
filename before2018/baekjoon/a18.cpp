#include <stdio.h>

char khazix[10000];

int main(){
	
	int n,i,j;
	int count=0;
	int point=0;
	
	scanf("%d",&n);
	
	scanf("%s",khazix);
	
	for(i=0;i<2000;i++){
		
		for(j=count;j<n;j++){
			
			count+=1;
			
			if(khazix[j]=='k'){
				
				break;
			}
		}
		
		for(j=count;j<n;j++){
				
			count+=1;
				
			if(khazix[j]=='h'){
					
				break;
			}
		}
		

		for(j=count;j<n;j++){
				
			count+=1;
				
			if(khazix[j]=='a'){
					
				break;
			}
		}
		
		for(j=count;j<n;j++){
				
			count+=1;
				
			if(khazix[j]=='z'){
					
				break;
			}
		}
		
		
		for(j=count;j<n;j++){
				
			count+=1;
				
			if(khazix[j]=='i'){
					
				break;
			}
		}
		
		
		for(j=count;j<n;j++){
				
			count+=1;
				
			if(khazix[j]=='x'){
					
				point+=1;
				break;
			}
		}
		
	}
	
	printf("%d",point);
	
}
