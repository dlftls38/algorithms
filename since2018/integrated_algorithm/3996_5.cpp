#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long kk=k;
	int a[100]={0};
	int cnt=1;
	while(1){
		if(k*kk>n){
			break;
		}
		k*=kk;
		cnt++;
	}
	int i,j;
	if(cnt%2==1){
		cnt--;
		k/=kk;
	}
	for(i=cnt;i>=0;i-=2){
		a[i]+=n/k;
		n-=n/k*k;
		k/=kk*kk;
	}
	for(i=cnt;i>=0;i-=2){
		printf("%d ",a[i]);
	}
	printf("\n");
	long long ans=a[cnt];
	for(i=cnt-2;i>=0;i-=2){
		ans*=kk;
	}
	long long tmp=1;
	for(i=cnt-2;i>=0;i-=2){
		tmp*=a[i];
	}
	ans+=tmp;
	printf("%lld",ans);
}
