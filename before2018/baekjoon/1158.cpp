#include <stdio.h>
int main(){
	int a[6000]={0};
	int n,i,j,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	i=0;
	int count=0;
	int total=0;
	printf("<");
	while(1){
		if(i==n){
			i=0;
		}
		else if(a[i]==0){
			i++;
		}
		else{
			count++;
			if(count==m){
				total++;
				count=0;
				if(total==n){
					printf("%d",a[i]);
					break;
				}
				else{
					printf("%d, ",a[i]);
				}
				a[i]=0;
			}
			i++;
		}
	}
	printf(">");
}
