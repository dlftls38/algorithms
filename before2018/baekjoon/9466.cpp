#include <stdio.h>
int sum;
void dfs(int count,int k,int check[100001],int a[100001]){
	if(check[k]==0){
		check[k]=count;
		dfs(count+1,a[k],check,a);
		check[k]=-1;
	}
	else if(check[k]==-1){
		sum+=count-1;
	}
	else{
		sum+=check[k]-1;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[100001]={0};
		int n,i,j;
		scanf("%d",&n);
		sum=0;
		int check[100001]={0};
		for(i=1;i<n+1;i++){
			scanf("%d",&a[i]);
		}
		for(i=1;i<n+1;i++){
			if(check[i]==0){
				dfs(1,i,check,a);
			}
		}
		printf("%d\n",sum);
	}
}
