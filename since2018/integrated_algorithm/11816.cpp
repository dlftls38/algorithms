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
	int sum=0;
	if(len>=2 && s[1]=='x'){
		int cur=1;
		for(i=len-1;i>1;i--){
			if(s[i]>='a') sum+=(s[i]-'a'+10)*cur;
			else sum+=(s[i]-'0')*cur;
			cur*=16;
		}
		printf("%d",sum);
	}
	else if(s[0]=='0'){
		int cur=1;
		for(i=len-1;i>0;i--){
			sum+=(s[i]-'0')*cur;
			cur*=8;
		}
		printf("%d",sum);
	}
	else{
		printf("%s",s.c_str());
	}
}
