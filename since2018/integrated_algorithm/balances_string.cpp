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
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long ans=1;
	int i;
	for(i=0;i<n;i++){
		if(i%2==0)
			ans=(ans*2)%MOD;
	}
	printf("%lld",ans);
}
