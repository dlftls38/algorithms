#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
vector < pair < int , int > > v;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		v.push_back(pair<int, int>(b,a));
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++){
		printf("%d %d\n",v[i].second,v[i].first);
	}
}
