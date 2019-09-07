#include<bits/stdc++.h>
using namespace std;
const int maxn = 2000007;
int prefix[maxn], suffix[maxn];
string s, t;
int main(){
	cin >> s >> t;
	int i,j;
	int w = 0;
	for(i = 0; w < t.size(); i++){
		if(s[i] == t[w]){
			prefix[w++] = i;	
		}
	}
	int v = t.size()-1;
	for(i = s.size()-1;i>=0; i--){
		if(s[i] == t[v]){
			suffix[v--] = i;	
		}
	}
	int ans = max(suffix[0], (int)s.size()-1-prefix[w-1]);
	for(i = 0; i+1 < t.size(); i++){
		ans = max(ans, suffix[i+1]-prefix[i]-1);
	}
	printf("%d", ans);
} 
