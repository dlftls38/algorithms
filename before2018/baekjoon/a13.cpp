#include <stdio.h>

int semsong[1000],apple[1000];

int main(){
	
	int n,i,k;
	int s=0;
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
			
		scanf("%d",&semsong[i]);
	}
	for(i=0; i<n; i++){
			
		scanf("%d",&apple[i]);
	}
			
	for(i=0 ;i<n; i++){
		
		if(semsong[i]>apple[0]){
			
			k=i;
			break;
		}
	}
	
	for(i=k;i<n;i++){
		
		if(semsong[i]>apple[i-k]){
			
			s+=1;
		}
	}
	
	printf("%d",s);
}
