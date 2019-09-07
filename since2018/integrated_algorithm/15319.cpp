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
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	long long ans=0;
	for(i=0;i<n;i++){
		int x,k;
		scanf("%d%d",&x,&k);
		vector<int>v;
		int cnt=0;
		while(k>0){
			if(k%2==1)
				v.push_back(cnt);
			cnt++;
			k/=2;
		}
		int pos=0;
		long long val=1;
		int len=v.size();
		for(j=0;j<len;j++){
			while(pos!=v[j]){
				val*=x;
				val%=MOD;
				pos++;
			}
			ans+=val;
			ans%=MOD;
		}
	}
	printf("%lld",ans);
}
