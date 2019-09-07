#include <stdio.h>

int main(){
	
	int i;
	int n;
	int j;
	int k;
	int num[1000];
	int odd[1000];
	int even[1000];
	int oddn=0;
	int evenn=0;
	int max = 0;
	int odd2[1000];
	int even2[1000];
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%d",&num[i]);
		
	}
	
	for (i=0; i<n; i++){
		
		if (num[i]%2==1){
			
			odd[oddn]=i+1;
			oddn+=1;
		}
		if (num[i]%2==0){
			
			even[evenn]=i+1;
			evenn+=1;
		}
		
	}
	
	for (i=0; i<oddn; i++){
		
		printf("%d ",odd[i]);
		
	}
	printf("\n");
	
	for (i=0; i<evenn; i++){
		
		printf("%d ",even[i]);
		
	}
}
