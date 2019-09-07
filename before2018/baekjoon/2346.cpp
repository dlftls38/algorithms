#include <stdio.h>
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	int a[1000]={0};
	int check[1000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("1 ");
	check[0]=1;
	int now=0;
	int next=a[0];
	for(j=0;j<n-1;j++){
		if(next>0){
			for(i=0;i<10000000;i++){
				if(next>0){
					next--;
					now++;
				}
				else{
					break;
				}
				if(now>=n){
					now=0;
				}
				if(check[now]==1){
					next++;
				}
			}	
		}
		else{
			for(i=0;i<10000000;i++){
				if(next<0){
					next++;
					now--;
				}
				else{
					break;
				}
				if(now<0){
					now=n-1;
				}
				if(check[now]==1){
					next--;
				}
			}		
		}
		check[now]=1;
		printf("%d ",now+1);
		next=a[now];
	}
}
