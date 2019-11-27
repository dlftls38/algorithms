#include<stdio.h>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#include<vector>
#include<set>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 16769023
#define INF 987654321
using namespace std;
int a[2][300];
pair<int,int> sum[2][300];
int n;
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[0][i],&a[1][i]);
	}
	sum[0][0].first=a[0][0];
	sum[1][0].second=a[1][0];
	for(i=1;i<n;i++){
		if(max(sum[0][i-1].first+a[0][i],sum[0][i-1].second)<max(sum[1][i-1].first+a[0][i],sum[1][i-1].second)){
			sum[0][i]=sum[0][i-1];
		}
		else{
			sum[0][i]=sum[1][i-1];
		}
		sum[0][i].first+=a[0][i];
		if(max(sum[0][i-1].first,sum[0][i-1].second+a[1][i])<max(sum[1][i-1].first,sum[1][i-1].second+a[1][i])){
			sum[1][i]=sum[0][i-1];
		}
		else{
			sum[1][i]=sum[1][i-1];
		}
		sum[1][i].second+=a[1][i];
	}
	if(max(sum[0][n-1].first,sum[0][n-1].second)<max(sum[1][i-1].first,sum[1][n-1].second)){
		printf("%d",max(sum[0][n-1].first,sum[0][n-1].second));
	}
	else{
		printf("%d",max(sum[1][i-1].first,sum[1][n-1].second));
	}
}
