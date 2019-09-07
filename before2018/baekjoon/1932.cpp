#include <stdio.h>
int a[200000];
int neww[200000];
int b[600];
int q=1;
int main(){
	
	int n,i,j,max=-1;
	
	scanf("%d",&n);
	
	for(i=0;i<(n*n+n)/2;i++){
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<510;i++){
		
		b[i]=(i*i+i)/2;
	}
	neww[0]=a[0];
	for(i=0;i<(n*n+n)/2;i++){
		
		if(i<b[q]){
		}
		else{
			q++;
		}
		if(neww[i+q]<neww[i]+a[i+q]){
			
			neww[i+q]=neww[i]+a[i+q];
		}
		if(neww[i+q+1]<neww[i]+a[i+q+1]){
			
			neww[i+q+1]=neww[i]+a[i+q+1];
		}
	}
	for(i=b[n-1];i<b[n-1]+n;i++){
		if(max<neww[i]){
			
			max = neww[i];
		}
	}
	printf("%d",max);
	
}
