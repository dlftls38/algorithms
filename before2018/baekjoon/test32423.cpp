#include <stdio.h>
void some(int b[3]){
	int i;
	for(i=0;i<3;i++){
		b[i]++;
	}
}
void re(int a[3]){
	int i;
	int b[3]={0};
	for(i=0;i<3;i++){
		b[i]=a[i];
	}
	some(b);
	for(i=0;i<3;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}
int main(){
	int a[3]={1,2,3};
	re(a);
	int i;
	for(i=0;i<3;i++){
		printf("%d ",a[i]);
	}
}
