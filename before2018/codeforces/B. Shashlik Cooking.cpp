#include <stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	if(k*2+1>=n){
		printf("1\n%d",n/2+1);
	}
	else if(k==0){
		printf("%d\n",n);
		for(int i=1;i<n+1;i++){
			printf("%d ",i);
		}
	}
	else{
		int full=k*2+1;
		if(n%full==0){
			printf("%d\n%d ",n/full,k+1);
			int position=k+1;
			for(int i=1;i<n/full;i++){
				position+=k*2+1;
				printf("%d ",position);
			}
		}
		else{
			int position=k+1-((full)-(n%(full)))/2;
			printf("%d\n%d ",n/(full)+1,position);
			for(int i=0;i<n/(full);i++){
				position+=k*2+1;
				printf("%d ",position);
			}	
		}
	}
}
