#include <stdio.h>
int main(){
	int a[200000]={0};
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<330;i++){
		if(i*i>n){
			k=i;
			break;
		}
	}
	for(i=1;i<k;i++){
		a[i*i]=1;
		for(j=1;j<n-i+1;j++){
			if(a[j+i*i]==0 || a[j+i*i]>1+a[j]){
				a[j+i*i]=1+a[j];
			}
		}
	}
	printf("%d",a[n]);
}
