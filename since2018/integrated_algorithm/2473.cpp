#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
struct temp{
	int s,m,e,sum;
};
int main(){
	int n;
	scanf("%d",&n);
	vector<long long>v;
	int i,j,k;
	for(i=0;i<n;i++){
		long long a;
		scanf("%lld",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	long long ans=LONG_LONG_MAX;
	int ans1;
	int ans2;
	int ans3;
	for(i=0;i<n-2;i++){
		for(j=i+2;j<n;j++){
			int l=i+1;
			int r=j-1;
			while(l<=r){
				int mid=(l+r)/2;
				long long temp=v[i]+v[mid]+v[j];
				if(abs(ans)>abs(temp)){
					ans=temp;
					ans1=v[i];
					ans2=v[mid];
					ans3=v[j];
				}
				if(temp<0){
					l=mid+1;
				}
				else{
					r=mid-1;
				}
			}
		}
	}
	printf("%d %d %d",ans1,ans2,ans3);
}
