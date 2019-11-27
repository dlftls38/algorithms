#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
 
int main(){
	long long n;
	cin>>n;
	string s;
	cin>>s;
	vector<long long> v;
	long long ans=n*(n-1)/2;
	char c=s[0];
	int len=0;
	int i;
	for(i=0;i<n;i++){
		if(s[i]==c){
			len++;	
		}
		else{
			v.push_back(len);
			c=s[i];
			len=1;
		}
	}
	v.push_back(len);
	for(i=0;i<v.size()-1;i++){
		ans-=v[i]+v[i+1]-1;
	}
	cout << ans;
}
