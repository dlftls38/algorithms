#include <stdio.h>

int main(){
	
	int i,j,a[10]={0},max=-1,maxn;
	
	scanf("%d %d %d",&a[0],&a[1],&a[2]);

	for(i=0;i<3;i++){
		
		if(max<a[i]){
			
			max = a[i];
			maxn=i;
		}
	}
	a[maxn]=0;
	max=-1;
	for(i=0;i<3;i++){
		
		if(max<a[i]){
			
			max = a[i];
		}
	}
	printf("%d",max);
}
