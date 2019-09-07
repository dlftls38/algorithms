#include <stdio.h>

	char b[1200][1200];
	char a[500];
	int ggg[1300000];
	int gggg[1300000];
	
int main(){
	
	int u = 1;
	int d = 0;
	int r = 0;
	int l = 0;
	
	int i = 0;
	int j = 0;
	
	int aa = 600;
	int bb = 600;
	int mm = 0;
	int k = 0;
	int max = -1;
	int maxmax = -1;
	b[600][600]=1;
	scanf("%s",a);
	
	for(i=0; i<500; i++){
		
		if(a[i]==70){
			
				if(u==1){
					
					bb++;
					b[aa][bb]=1;
					
				}
				
				else if(d==1){
					
					bb--;
					b[aa][bb]=1;
				}
				
				else if(r==1){
					
					aa++;
					b[aa][bb]=1;
				}
				
				else if(l==1){
					
					aa--;
					b[aa][bb]=1;
				}				

		}
		
		else if(a[i]==66){
			
				if(u==1){
					
					bb--;
					b[aa][bb]=1;
				}
				
				else if(d==1){
					
					bb++;
					b[aa][bb]=1;
				}
				
				else if(r==1){
					
					aa--;
					b[aa][bb]=1;
				}
				
				else if(l==1){
					
					aa++;
					b[aa][bb]=1;
				}				
			
		}
		
		else if(a[i]==76){
			
				if(u==1){
					
					u=0;
					l=1;
				}
				
				else if(d==1){
					
					d=0;
					r=1;
				}
				
				else if(r==1){
					
					r=0;
					u=1;
				}
				
				else if(l==1){
					
					l=0;
					d=1;
				}				

		}
		
		else{
			
				if(u==1){
					
					u=0;
					r=1;
				}
				
				else if(d==1){
					
					d=0;
					l=1;
				}
				
				else if(r==1){
					
					r=0;
					d=1;
				}
				
				else if(l==1){
					
					l=0;
					u=1;
				}				

		}			
	}
	
	for(i=0;i<1200;i++){
		
		for(j=0;j<1000;j++){
			
			if(b[j][i]==1){
				
				ggg[k]++;
			}
			else{
				k++;	
			}
		}
	}
	k=0;
	for(i=0;i<1200;i++){
		
		for(j=0;j<1200;j++){
			
			if(b[i][j]==1){
				
				gggg[k]++;
			}
			else{
			
				k++;
			}
		}
	}
	for(i=0;i<1300000;i++){
		
		if(max<ggg[i]){
			
			max=ggg[i];
		}
	}
	for(i=0;i<1300000;i++){
		
		if(maxmax<gggg[i]){
			
			maxmax=gggg[i];
		}
	}	
	max--;
	maxmax--;
	k = max*maxmax;
	printf("%d",k);

}
