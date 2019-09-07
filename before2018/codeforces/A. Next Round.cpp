#include <stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[50]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int answer=0;
	for(int i=0;i<n;i++){
		if(a[k-1]<=a[i] && a[i]>0){
			answer++;
		}
	}
	printf("%d",answer);
}
