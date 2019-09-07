#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int l,w,a;
		scanf("%d%d%d",&l,&w,&a);
		if(l+w+a==0)break;
		if(l==0){
			printf("%d %d %d\n",a/w,w,a);
		}
		else if(w==0){
			printf("%d %d %d\n",l,a/l,a);
		}
		else{
			printf("%d %d %d\n",l,w,l*w);
		}
	}
}
