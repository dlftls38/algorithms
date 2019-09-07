#include <stdio.h>
int n,flag=0,flag2=0;
void dfs(int first,int now,int rail[1000000],int count,int sum,int a[1001][1001]){
	int i,j;
	int c=0;
	if(flag==1){
		return;
	}
	if(first== now && sum==0){
		flag=1;
		for(i=0;i<count;i++){
			printf("%d ",rail[i]);
		}
		return;
	}
	for(i=1;i<n+1;i++){
		if(a[now][i]>0){
			a[now][i]--;
			a[i][now]--;
			rail[count++]=i;
			sum-=2;
			dfs(first,i,rail,count,sum,a);
			a[now][i]++;
			a[i][now]++;
			rail[--count]=0;
			sum+=2;
		}
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	int a[1001][1001]={0};
	int sum=0;
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
		if(sum%2==1 && sum > 1){
			flag2=1;
		}
	}
	if(flag2==1){
		printf("-1");
		return 0;
	}
	for(i=1;i<2;i++){
		int something[1000000]={0};
		int count=0;
		something[count++]=i;
		dfs(i,i,something,count,sum,a);
		if(flag==1){
			break;
		}
	}
	if(flag==0){
		printf("-1");
	}
}
