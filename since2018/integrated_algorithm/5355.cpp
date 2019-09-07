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
		double n;
		scanf("%lf",&n);
		while(1){
			char oper;
			scanf("%c",&oper);
			if(oper==' ')continue;
			else if(oper=='@'){
				n*=3;
			}
			else if(oper=='%'){
				n+=5;
			}
			else if(oper=='#'){
				n-=7;
			}
			else if(oper=='\n')break;
		}
		printf("%.2f\n",n);
	}
}
