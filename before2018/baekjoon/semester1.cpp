#include <stdio.h>
#include <string.h>

char word[20001][70];

int main(){
	
	int i,n,j,k,t,m;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%s",word[i]);
	}
	
	for(i=0;i<n;i++){
		
		k=i;
		
		for(j=0;j<n;j++){
			
			if(i==j){
				
			}
			
			else {			
			
				if(strlen(word[k])<strlen(word[j])){
				
				}
			
				else if(strlen(word[j])<strlen(word[k])){
					k=j;
				}
			
				else {
					
					for(t=0;t<50;t++){
						
						if(word[k][t]==word[j][t]){
							
						}
						
						else if(word[k][t]<word[j][t]){
							break;
						}
						
						else if (word[k][t]>word[j][t]){
							k=j;
							break;
						}
						if(t==49){
							
							for (m=0;m<60;m++){
			
								word[j][m]='a';
							}							
						}
					}
				}
			}
		}
		if (strlen(word[k])>55){
			
			continue;
		}
		printf("%s\n",word[k]);
		for (j=0;j<60;j++){
			
			word[k][j]='a';
		}
		
	}
}
