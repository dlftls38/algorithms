#include <stdio.h>
int main(){
	int a[5]={0};
	int i,j;
	int k,max=0,maxnumber;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			scanf("%d",&k);
			a[i]+=k;
		}
	}
	for(i=0;i<5;i++){
		if(max<a[i]){
			max=a[i];
			maxnumber=i+1;
		}
	}
	printf("%d %d",maxnumber,max);
}
