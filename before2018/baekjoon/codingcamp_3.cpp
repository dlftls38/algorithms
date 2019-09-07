#include <stdio.h>
int main(){
	int n,k,i;
	scanf("%d%d",&n,&k);
	if(k==0){
		printf("B");
		for(i=0;i<n-1;i++) printf("A");
	}
	else{
		int a[50]={0};
		int B=0;
		for(i=n-1;i>-1;i--){
			if(k==0){
				break;
			}
			if(i-B<=k){
				k-=i-B;
				a[i]=1;
				B++;
			}
		}
		if(k==0){
			for(i=0;i<n;i++){
				if(a[i]==0){
					printf("A");
				}
				else{
					printf("B");
				}
			}
		}
		else{
			printf("-1");
		}
	}
}

