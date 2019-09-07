#include <stdio.h>
int main(){
	int n,k,i,start=1001,end=1001,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(end>=k){
			start=k;
			end=k;
		}
		else{
			end=k;
			if(max<end-start) max=end-start;
		}
	}
	printf("%d",max);
}
