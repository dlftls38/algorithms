#include <stdio.h>

int number[100],i,j;
int p=0;
int d=0;
int e=0;

int fuck(int k){
	
	number[0]=k;
	if (k>0){
		if (number[1]==1 && number[0]==2){
			
			for(i=0; i<30; i++){
			
				if(number[i]>0 && number[i+1]>0){
				
					printf("%d+",number[i]);
				}
				else if(number[i]>0 && number[i+1]==0){
				
					printf("%d\n",number[i]);
					break;
				}
			}
			
			number[0]=1;
			for(j=0;j<30;j++){
				
						if(number[j]==0){
					
							number[j]=1;
							break;
						}
					}
			for(i=0; i<30; i++){
			
				if(number[i]>0 && number[i+1]>0){
				
					printf("%d+",number[i]);
				}
				else if(number[i]>0 && number[i+1]==0){
				
					printf("%d\n",number[i]);
					break;
				}
			}
			
		}
		else if (number[1]==1 && number[0]!=2){
			
			for(i=0; i<30; i++){
			
				if(number[i]>0 && number[i+1]>0){
				
					printf("%d+",number[i]);
				}
				else if(number[i]>0 && number[i+1]==0){
				
					printf("%d\n",number[i]);
					break;
				}
			}
			for(i=1;i<30;i++){
				
				if(number[i]==1){
					
					p+=1;
				}
			}
			p+=1;
			if(k<p+2){
				number[1]=k-3;
				for (i=20;i>0;i--){
					if (number[i]==1){
						
						number[i]=0;
						e+=1;
					}
					if(e==k-3){
						break;
					}
				}
			}
			else {
				
				for(i=1;i<30;i++){
			
					if(number[i]==1){
				
						number[i]=0;
						number[1]+=1;
					}
			
					else {
				
						break;
					}
				}
			}
			e=0;
			p=0;
			number[1]+=1;
			return fuck(k-1);
		}
		
		else {
			for(i=0; i<30; i++){
			
				if(number[i]>0 && number[i+1]>0){
				
					printf("%d+",number[i]);
				}
				else if(number[i]>0 && number[i+1]==0){
				
					printf("%d\n",number[i]);
					break;
				}
			}
			
			for (i=99; i>0; i--){
		
				if (number[i]==2){
			
					number[i]-=1;
					for(j=0;j<30;j++){
				
						if(number[j]==0){
					
							number[j]=1;
							d+=1;
							break;
						}
					}
				}
				else if (number[i]>2 && number[i+1]!=2){
			
					number[i]-=1;
					number[i+1]+=1;
				}
				if (d==1){
					d=0;
					break;
				}
			}
	
			fuck(k);
		}
	}
}
int main(){
	
	int n;
	
	scanf("%d",&n);
	
	number[1]=1;
	
	fuck(n-1);
}
