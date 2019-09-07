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
		int n;
		scanf("%d",&n);
		string s,t;
		cin>>s>>t;
		int i,j;
		int w=0,b=0;
		for(i=0;i<n;i++){
			if(s[i]!=t[i]){
				if(s[i]=='W')w++;
				else b++;
			}
		}
		int val=min(w,b);
		w-=val;
		b-=val;
		printf("%d\n",w+b+val);
	}
}
