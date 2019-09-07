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
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		long long n,m;
		scanf("%lld%lld",&n,&m);
		vector<int>last;
		long long i,j;
		for(i=1;;i++){
			long long temp=n*i;
			if(last.empty()){
				last.push_back((m*i)%10);
			}
			else{
				if(last[0]==(m*i)%10){
					break;
				}
				else{
					last.push_back((m*i)%10);
				}
			}
		}
		long long sum=0;
		for(auto it : last){
			sum+=it;
		}
		long long len=last.size();
		long long cnt=n/m;
		long long ans=(cnt/len)*sum;
		cnt%=len;
		for(i=0;i<cnt;i++){
			ans+=last[i];
		}
		printf("%lld\n",ans);
	}
}
