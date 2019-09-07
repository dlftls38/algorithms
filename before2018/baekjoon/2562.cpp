#include <stdio.h>
int main(){
	int a,i,max=0,maxindex=0;
	for(i=0;i<9;i++){
		scanf("%d",&a);
		if(a>max){
			max=a;
			maxindex=i+1;
		}
	}
	printf("%d\n%d",max,maxindex);
}
