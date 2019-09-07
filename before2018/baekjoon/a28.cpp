#include <stdio.h>

	int number[101];
	int number2[101];
	
int main(){
	
	int n,i,j;
	int k=1;
	int sum=0;
	
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		
		scanf("%d",&number[i]);
	}
	
	for(i=1;i<n+1;i++){
		
		if(number[i]==0){
			
			number2[i]=0;
			k=1;
		}
		
		else if(number[i-1]==0 && number[i]==1){
			
			number2[i]=1;
		}
		
		else if (number[i-1]>0 && number[i]==1){
			
			k+=1;
			number2[i]=k;
		}
	}
	
	for(i=1;i<n+1;i++){
		
		sum+=number2[i];
	}
	
	printf("%d",sum);
}
