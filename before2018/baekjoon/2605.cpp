#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[110]={0};
	int count=-1;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		count++;
		for(j=count;j>=x;j--){
			a[j+1]=a[j];
		}
		a[x]=i+1;
	}
	for(i=n-1;i>-1;i--){
		printf("%d ",a[i]);
	}
	
}
