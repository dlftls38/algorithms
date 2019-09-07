#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int d;
		scanf("%d",&d);
		int i;
		for(i=0;i<=100;i++){
			if(i+i*i>d){
				printf("%d\n",i-1);
				break;
			}
		}
	}
}
