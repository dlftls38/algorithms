#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	vector<int>v;
	vector<int>sum;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
		sum.push_back(x);
		if(i>0){
			sum[i]+=sum[i-1];
		}
	}
	long long ans=0;
	for(i=0;i<n-1;i++){
		ans+=1LL*v[i]*(sum[n-1]-sum[i]);
	}
	printf("%lld",ans);
}
