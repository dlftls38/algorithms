#include <stdio.h>
#include <stdlib.h>
int intcmp (const void* v1, const void* v2)

{

   return * (int*)v1 -* (int*)v2;

}

int main(){
	
	int a[10]={0},i,j,c=0,min=-1,minindex=0,b[5]={0};
	
	for(i=0;i<8;i++){
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		
		for(j=0;j<8;j++){
			
			if(min<=a[j]){
				
				min = a[j];
				minindex = j+1;
			}
		}
		c+=min;
		min=-1;
		b[i]=minindex;
		a[minindex-1]=-1;
	}
	
	qsort( b, sizeof(b) / sizeof(b[0]), sizeof(b[0]), intcmp);
	printf("%d\n",c);
	for(i=0;i<5;i++){
		
		printf("%d ",b[i]);
	}
}
