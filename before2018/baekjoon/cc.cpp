#include <stdio.h>

int k[100];
int main(){
	
	int t,n,m,i,j,a,b;
	int r=0;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%d%d",&n,&m);
		for(j=0;j<n;j++){
			
			scanf("%d",&a);
			if(m%2==1){
				
				if(m/2+1 > a){
					
					r = 1;
				}
			}
			else{
				
				if(m/2 > a){
					
					r = 1;
				}
			}
			for(m=0;m<a;m++){
				
				scanf("%d",&b);
				k[b-1] = 1;
			}
		}
		for(j=0;j<m;j++){
			
			if(k[j]==0){
				
				r = 1;
			}
		}
		if(r==1){
			
			printf("Let's study\n");
		}
		
		else{
			
			printf("Let's drink\n");
		}
		r = 0;
		for(j=0;j<m;j++){
			
			k[j]=0;
		}
	}
}
