#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int f[100000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	long long sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&f[i]);
		sum+=f[i];
	}
	for(i=0;i<n;i++){
		if(sum-f[i]==f[i]){
			for(j=0;j<n;j++){
				if(i!=j){
					printf("%d ",f[j]);
				}
			}
			printf("%d",f[i]);
			return 0;
		}
	}
}
