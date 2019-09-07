#include <stdio.h>

int main() {
	
	int n,i,j,a[110000],count=0,max=0,b[110000]={0},c[110000]={0},len=0,len2=0,d[110000];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&b[i]);
		if(b[i]>n){
			
			d[len2++] = b[i];
		}
		else{
			a[b[i]]++;
		}
	}
	
	for(i=0;i<n;i++){
		
		if(a[i]>0){
			
			c[len++]=i;
		}
	}
	for(i=0;i<len2+10;i++){
		
		c[len++]=d[i];
	}
	for(i=0;i<len+100;i++){
		
		for(j=0;j<n;j++){
			
			if(b[j]>=c[i]){
				
				count+=1;
			}
			else{
				
				if(c[i]*count>max){
					
					max = c[i]*count;
				}
				count = 0;
			}
		}
		if(c[i]*count>max){
			
			max = c[i]*count;
		}
		count = 0;
	}
	printf("%d",max);
	
	
}
