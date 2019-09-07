#include <stdio.h>

int main(){
	
	int n,i,j,z,max=-1;
	int a[52][52]={0};
	int b[52]={0};
	
	char qqq[52]={0};
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		
		scanf("%s",qqq);
		for(j=1;j<n+1;j++){
			
			if(qqq[j-1]=='Y'){
				
				a[i][j]=1;
			}
		}
	}
	
	for(i=1;i<n+1;i++){
		
		for(j=1;j<n+1;j++){
			
			if(a[i][j]==1){
				
				b[i]++;
			}
			else{
				
				for(z=1;z<n+1;z++){
					
					if(a[i][z]==1 && a[j][z]==1 && i!=j){
						
						b[i]++;
						break;
					}
				}
			}
		}
	}
	for(i=1;i<n+1;i++){
		
		if(max<b[i]){
			
			max=b[i];
		}
	}
	printf("%d",max);
}
