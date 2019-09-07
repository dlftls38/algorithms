#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector< pair<long long, long long> > v;
int answer[200001];
long long day[200001];
int main(){
	int n;
	long long m,d;
	scanf("%d%lld%lld",&n,&m,&d);
	int tail=1;
	for(int i=0;i<n;i++){
		long long x;
		scanf("%lld",&x);
		v.push_back(make_pair(x,i));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<tail;j++){
			if(day[j]==0){
				day[j]=v[i].first;
				answer[v[i].second]=j+1;
				tail++;
				break;
			}
			else{
				if(day[j]+1+d<=v[i].first){
					day[j]=v[i].first;
					answer[v[i].second]=j+1;
					break;
				}
			}
		}
	}
	printf("%d\n",tail-1);
	for(int i=0;i<n;i++){
		printf("%d ",answer[i]);
	}
}
