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
		long long k;
		scanf("%lld",&k);
		long long l=1;
		long long r=1000000000000000000;
		long long ans;
		int i,j;
		while(l<=r){
			long long mid=(l+r)/2;
			long long before_sum=(mid)*(mid-1)/2;
			long long temp=9;
			for(i=0;i<17;i++){
				long long cnt=max((mid-1)-temp,(long long)0);
				before_sum+=cnt*(cnt+1)/2;
				temp*=10;
				temp+=9;
			}
			long long current_sum=(mid)*(mid+1)/2;
			temp=9;
			for(i=0;i<17;i++){
				long long cnt=max((mid)-temp,(long long)0);
				current_sum+=cnt*(cnt+1)/2;
				temp*=10;
				temp+=9;
			}
			if(mid>before_sum && mid<=current_sum){
				k-=before_sum;
				long long ll=1;
				long long rr=100000000000000;
				while(ll<=rr){
					long long mid=(ll+rr)/2;
					long long sum=mid-1;
					temp=9;
					for(i=0;i<17;i++){
						long long cnt=max((mid-1)-temp,(long long)0);
						temp*=10;
						temp+=9;
					}
					long long t=mid;
					int len=0;
					while(t>0){
						len++;
						t/=10;
					}
					if(sum<k && k<=sum+len){
						k-=sum;
						for(i=0;i<k;i++){
							printf("%lld\n",mid);
							mid/=10;
						}
						ans=mid%10;
						break;
					}
					else{
						if(sum>=k){
							ll=mid+1;
						}
						else{
							rr=mid-1;
						}
					}
				}
				printf("%lld\n",ans);
				break;
			}
			else{
				if(mid<=before_sum){
					l=mid+1;
				}
				else{
					r=mid-1;
				}
			}
		}
	}
}
