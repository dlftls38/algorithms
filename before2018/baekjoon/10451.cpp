#include <stdio.h>
void dfs(int count,int k,int check[1001],int a[1001]){
	if(check[k]==0){
		check[k]=1;
		dfs(count+1,a[k],check,a);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[1001]={0};
		int n,i,j;
		scanf("%d",&n);
		int sum=0;
		int check[1001]={0};
		for(i=1;i<n+1;i++){
			scanf("%d",&a[i]);
		}
		for(i=1;i<n+1;i++){
			if(check[i]==0){
				sum++;
				dfs(1,i,check,a);
			}
		}
		printf("%d\n",sum);
	}
}
