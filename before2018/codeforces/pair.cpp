#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector< pair< long long, pair<long long,long long> > > v;
int main(){
	int n;
	long long m;
	scanf("%d%lld",&n,&m);
	int i;
	for(i=0;i<n;i++){
		long long q,w;
		scanf("%lld%lld",&q,&w);
		v.push_back(make_pair(q-w,make_pair(q,w)));
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(i=0;i<n;i++){
		printf("%lld %lld %lld\n",v[i].first,v[i].second.first,v[i].second.second);
	}
}
