#include <stdio.h>
int main(){
	int n,w,l;
	scanf("%d%d%d",&n,&w,&l);
	int i,j;
	int a[1001]={0};
	int b[1001]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	i=0;
	int top=0;
	int end=0;
	while(1){
		if(sum+a[end]<=l){
			sum+=a[i];
			end++;
		}
		for(j=top;j<end;j++){
			b[j]++;
			if(b[j]==w){
				top++;
				sum-=a[j];
			}
		}
		i++;
		if(top==n){
			break;
		}
	}
	printf("%d",i+1);
}
