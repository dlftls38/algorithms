#include <stdio.h>
void re(int a[3],int count){
	int b[3]={0};
	for(int i=0;i<3;i++){
		b[i]=a[i];
	}
	int i;
	for(i=0;i<3;i++){
		b[i]++;
	}
}
int main(){
	int a[3]={1,2,3};
	re(a,0);
	int i;
	for(i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
