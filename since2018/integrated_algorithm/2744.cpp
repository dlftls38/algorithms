#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	string s;
	cin>>s;
	for(auto it : s){
		if(it>='a'){
			printf("%c",it-('a'-'A'));
		}
		else{
			printf("%c",it+('a'-'A'));
		}
	}
}
