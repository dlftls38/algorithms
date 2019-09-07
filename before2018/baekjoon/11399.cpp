#include <stdio.h>

int main(){
	
	int n,i,j,count=0,min=10000,inde=0;
	int a[1100]={0};
	int b[1100]={0};
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			if(min>a[j] && a[j]!=0){
				min = a[j];
				inde = j;
			}
		}
		if(i==0){
			b[i]=min;
		}
		else{
			b[i]=min+b[i-1];
		}
		min=10000;
		a[inde]=0;
	}
	for(i=0;i<n;i++){
		count+=b[i];
	}
	printf("%d",count);
}
