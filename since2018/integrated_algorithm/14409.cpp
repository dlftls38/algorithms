#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int x;
	scanf("%d",&x);
	int i,j;
	int sum=0;
	for(i=0;i<n;i++){
		int p1,p2;
		scanf("%d%d",&p1,&p2);
		if(abs(p1-p2)<=x){
			sum+=max(p1,p2);
		}
		else{
			int p3;
			scanf("%d",&p3);
			sum+=p3;
		}
	}
	printf("%d",sum);
}
