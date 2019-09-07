#include <stdio.h>
int a[49],b[49],k;
void print(int now,int z[49],int fill){
	int i;
	if(now==6){
		for(i=0;i<6;i++){
			printf("%d ",z[i]);
		}
		printf("\n");
		return;
	}
	for(i=fill;i<k;i++){
		z[now]=a[i];
		print(now+1,z,i+1);
	}
}
int main(){
	int i;
	while(1){
		scanf("%d",&k);
		if(k==0) break;
		for(i=0;i<k;i++) scanf("%d",&a[i]);
		print(0,b,0);
		printf("\n");
	}
}
