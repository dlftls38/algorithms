#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector < pair < int , int > > v;
int a[200001];
int b[200001];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		v.push_back(make_pair(a[i]-b[i],i));
	}
	long long answer=0;
	int t=0;
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		if(v[i].first<=0){
			answer+=a[v[i].second];
			t++;
		}
		else if(t<k){
			answer+=a[v[i].second];
			t++;
		}
		else{
			for(j=v.size()-1;j>i-1;j--){
				answer+=b[v[j].second];
				//printf("%d\n",answer);
			}
			break;
		}
		//printf("%d\n",answer);
	}
	printf("%lld",answer);
}
