#include <stdio.h>
int main(){
	int n,k,a[10],i,count=0,nowcount;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>-1;i--){
		nowcount=(k/a[i]);
		count+=nowcount;
		k-=nowcount*a[i];
	}
	printf("%d",count);
}
