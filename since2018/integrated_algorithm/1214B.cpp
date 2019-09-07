#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int b,g,n;
	scanf("%d%d%d",&b,&g,&n);
	int i,j;
	int ans=0;
	for(i=0;i<=n;i++){
		if(i<=b && n-i<=g)ans++;
	}
	printf("%d",ans);
}
