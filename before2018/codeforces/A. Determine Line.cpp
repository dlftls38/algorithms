#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[101]={0};
	for(int i=0;i<n;i++){
		int r;
		scanf("%d",&r);
		for(int j=0;j<r;j++){
			int x;
			scanf("%d",&x);
			a[x]++;
		}
	}
	for(int i=0;i<101;i++){
		if(a[i]==n){
			printf("%d ",i);
		}
	}
}
