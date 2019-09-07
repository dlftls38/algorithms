#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int l;
	scanf("%d",&l);
	int i,j;
	int lucky_set[51]={0};
	for(i=1;i<=l;i++){
		scanf("%d",&lucky_set[i]);
	}
	sort(lucky_set,lucky_set+l+1);
	int n;
	scanf("%d",&n);
	if(find(lucky_set,lucky_set+l+1,n)!=lucky_set+l+1){
		printf("0");
	}
	else{
		for(i=0;i<l;i++){
			if(lucky_set[i]<n && n<lucky_set[i+1]){
				int ans=0;
				for(j=lucky_set[i]+1;j<=n;j++){
					ans+=lucky_set[i+1]-j-1;
					if(j!=n)ans-=n-j-1;
				}
				printf("%d",ans);
				return 0;
			}
		}
	}
}
