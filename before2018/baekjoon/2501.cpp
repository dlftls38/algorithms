#include <stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[100000]={0};
	int top=0;
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			a[top++]=i;
		}
	}
	printf("%d",a[k-1]);
}
