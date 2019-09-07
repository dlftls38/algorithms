#include <stdio.h>

int main() {
	
	int i;
	int n;
	int s;
	int e;
	int q=0;
	int k[10000];
	int result=0;
	
	scanf("%d%d%d",&n,&s,&e);
	for (i=0; i<n; i++){
		
		scanf("%d",&k[i]);	
	}
	
	for (i=s-1; i<e; i++){
		if (k[i]>q){
			
			q=k[i];
		}
	}
	
	for (i=s-1; i<e; i++){
		
		if (k[i]<q){
			
			result += k[i];
		}
	}
	
	printf("%d",result);
}
