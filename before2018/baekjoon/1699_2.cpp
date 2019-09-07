#include <stdio.h>
int main(){
	int n,a[100001]={0},i,j;
	scanf("%d",&n);
	for(i=1;i<318;i++){
		for(j=0;j<100001;j++){
			if(j+i*i>100000) break;
			if(a[i*i+j]==0 || a[i*i+j]>a[j]+1){
				a[i*i+j]=a[j]+1;
			}
		}
	}
	printf("%d",a[n]);
}
