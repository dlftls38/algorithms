#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a==0 && b==0 && c==0 && d==0){
			break;
		}
		printf("%d %d\n",c-b,d-a);
	}
}
