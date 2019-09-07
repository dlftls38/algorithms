#include <stdio.h>
int main(){
	int i,j,n,a[1000],b[1000]={0},max=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				if(b[j]<b[i]+a[j]){
					b[j]=b[i]+a[j];
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]>max) max=b[i];
	}
	printf("%d",max);
}
