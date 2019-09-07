#include <stdio.h>
int main(){
	int a[3];
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	int max=0;
	if(max<a[2]-a[1]){
		max=a[2]-a[1]-1;
	}
	if(max<a[1]-a[0]){
		max=a[1]-a[0]-1;
	}
	printf("%d",max);
}
