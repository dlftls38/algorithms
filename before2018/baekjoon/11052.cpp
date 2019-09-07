#include <stdio.h>

int main(){
	
	int n,i,j;
	int a[1001]={0};
	
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		
		scanf("%d",&a[i]);
	}
	for(i=1;i<n+1;i++){
		
		for(j=1;j<n-i+1;j++){
			
			if(a[i+j]<a[i]+a[j]){
				a[i+j]=a[i]+a[j];
			}
		}
	}
	printf("%d",a[n]);
}
