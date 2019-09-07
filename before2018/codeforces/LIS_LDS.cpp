#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n,i,j,k;
	int a[100001]={0};
	scanf("%d",&n);
	int m=1;
	for(i=0;i<n;i++){
		a[i]=i+1;
		m*=i+1;
	}
	int answer=100000;
	int q[100001]={0};
	for(i=0;i<m;i++){
		int dp[100001]={0};
		int max=1;
		int dp2[100001]={0};
		int max2=1;
		for(j=0;j<n;j++){
			//printf("%d ",a[j]);
			if(dp[j]==0) dp[j]=1;
			if(dp2[j]==0) dp2[j]=1;
			for(k=j+1;k<n;k++){
				if(a[k]>a[j] && dp[k]<dp[j]+1){
					dp[k]=dp[j]+1;
					if(dp[k]>max) max=dp[k];
				}
				if(a[k]<a[j] && dp2[k]<dp2[j]+1){
					dp2[k]=dp2[j]+1;
					if(dp2[k]>max2) max2=dp2[k];
				}
			}
		}
		if(max+max2<answer){
			answer=max+max2;
			for(j=0;j<n;j++){
				q[j]=a[j];
			}
		}
		next_permutation(a,a+n);
	}
	for(i=0;i<n;i++){
		printf("%d ",q[i]);
	}
	printf("answer = %d",answer);
}
