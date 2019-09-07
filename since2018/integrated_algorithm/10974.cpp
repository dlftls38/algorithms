#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int a[8];
	int i,j;
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	int cnt=1;
	for(i=2;i<=n;i++){
		cnt*=i;
	}
	for(i=0;i<cnt;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
		next_permutation(a,a+n);
	}
}
