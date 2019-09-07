#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	string s;
	cin>>s;
	int len=s.length();
	int i;
	for(i=0;i<len-1;i++){
		if(s[i]=='s' && s[i+1]=='s'){
			printf("hiss");
			return 0;
		}
	}
	printf("no hiss");
}
