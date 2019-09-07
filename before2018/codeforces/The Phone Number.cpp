#include <stdio.h>
int main(){
	int n,i,j;
	int b[100001]={0};
	scanf("%d",&n);
	int m=1;
	for(i=0;i<n;i++){
		m*=i+1;
	}
	for(i=n/2+1,j=0;i<n+1;i++,j++){
		b[j]=i;
	}
	for(i=1;i<n/2+1;i++,j++){
		b[j]=i;
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
