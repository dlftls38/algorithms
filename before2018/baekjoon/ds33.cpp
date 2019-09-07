#include <stdio.h>
#include <string.h>
int main(){
	
	int a[30]={0};
	char b[30]={0};
	int s[60]={0};
	int push=0;
	int i,j,k=0,t=0,min=200,m=0,v=1;
	
	scanf("%s",b);
	int p = strlen(b);
	
	for(i=0;i<p;i++){
		
		for(j=0;j<p;j++){
			
			if(min>b[j]){
				
				min = b[j];
				m = j;
				
			}
		}
		b[m]= 'z'+1;
		a[m] = v++;
		min = 200;
	}
	for(i=0;i<p;i++){
		if (push<(a[i])){
			for(j=0;j<p;j++){
					
				if(push<a[i]){
						
					s[k++]=1;
					push++;
				}
				else{
						
					break;
				}
			}
		}
		if(a[i]-a[i+1] < 2 && i<p-1){
				
			s[k++]=2;
		}
		else if(i==p-1){
			
			s[k++]=2;
		}
		else{
					
			t=1;
			break;
		}
	}
	if(t==1){
		
		printf("impossible");
	}
	else{
		
		for(i=0;i<p*2;i++){
			if(s[i]==1){
				
				printf("push\n");
			}
			else{
				
				printf("pop\n");
			}
		}
	}
}
