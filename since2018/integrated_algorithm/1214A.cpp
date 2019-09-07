#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n,d,e;
	scanf("%d%d%d",&n,&d,&e);
	int i,j;
	int ans=INF;
	for(i=0;;i+=5){
		if(n-e*i>=0){
			ans=min(ans,n-e*i-(n-e*i)/d*d);	
		}
		else{
			break;
		}
	}
	printf("%d",ans);
}
