#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<100000;i++){
		int sum=0;
		int k=1;
		sum+=k;
		k*=i;
		sum+=k;
		k*=i;
		sum+=k;
		if(sum==n){
			printf("%d",i);
			return 0;
		}
	}
}
