#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;
multiset<long long> ms;
int main(){
	int n;
	long long z;
	scanf("%d%lld",&n,&z);
	int i;
	for(i=0;i<n;i++){
		long long x;
		scanf("%lld",&x);
		ms.insert(x);
	}
	int count=0;
	while(!ms.empty()){
		multiset<long long>::iterator lower=ms.lower_bound(*ms.begin()+z);
		if(lower!=ms.end()){
			count++;
			ms.erase(lower);
			ms.erase(ms.begin());
		}
		else{
			break;
		}
	}
	printf("%d",count);
}