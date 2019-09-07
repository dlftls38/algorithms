#include <stdio.h>
int main(){
	int n,s;
	scanf("%d",&n);
	scanf("%d",&s);
	int a[20]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	int q=1<<n;
	for(i=1;i<q;i++){
		int bitmask[20]={0};
		int k=i;
		for(j=19;j>-1;j--){
			if((1<<j)<=k){
				k-=1<<j;
				bitmask[j]=1;
			}
		}
		int sum=0;
		for(j=0;j<20;j++){
			sum+=bitmask[j]*a[j];
		}
		if(sum==s){
			count++;
		}
	}
	printf("%d",count);
}
