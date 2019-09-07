#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector < pair < int , int > > a;
vector < pair < int , int > > b;
int main(){
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		if(q<0){
			a.push_back(make_pair(-q,w));
		}
		else{
			b.push_back(make_pair(q,w));
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	long long answer=0;
	if(b.size()>a.size()){
		for(i=0;i<a.size();i++){
			answer+=b[i].second;
			answer+=a[i].second;
		}
		answer+=b[i].second;
	}
	else{
		for(i=0;i<b.size();i++){
			answer+=b[i].second;
			answer+=a[i].second;
		}
		if(b.size()<a.size())
		answer+=a[i].second;
	}
	printf("%lld",answer);
}
