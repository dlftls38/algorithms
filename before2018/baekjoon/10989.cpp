#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[10001]={0};
	int i;
	for(i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		a[k]++;
	}
	int k=1;
	while(1){
		if(a[k]>0){
			printf("%d\n",k);
			a[k]--;
		}
		else{
			k++;
			if(k==10001){
				break;
			}
		}
	}
}
