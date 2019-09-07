#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		int guest_number;
		scanf("%d",&guest_number);
		map<int,int>g;
		int i,j;
		for(i=0;i<guest_number;i++){
			int c;
			scanf("%d",&c);
			g[c]++;
		}
		for(auto it : g){
			if(it.second==1){
				printf("Case #%d: %d\n",k,it.first);
				break;
			}
		}
	}
}
