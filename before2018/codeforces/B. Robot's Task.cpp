#include <stdio.h>
int main(){
	int n;
	int a[1001]={0};
	int check[1001]={0};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=-1;
	int r=1;
	int d=r;
	int now=0;
	int sum=0;
	int answer=0;
	while(1){
		if(d==r){
			for(i=0;i<n;i++){
				if(check[i]==0 && now>=a[i]){
					sum++;
					check[i]=1;
					now++;		
				}
			}
			d=l;
		}
		else{
			for(i=n-1;i>-1;i--){
				if(check[i]==0 && now>=a[i]){
					sum++;
					check[i]=1;
					now++;		
				}
			}
			d=r;
		}
		if(sum<n){
			answer++;
		}
		else{
			break;
		}
	}
	printf("%d",answer);
}
