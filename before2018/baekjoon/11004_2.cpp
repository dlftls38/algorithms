#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
 
int main()
{
    std::vector<long long> v;
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
    	long long x;
    	scanf("%lld",&x);
    	v.push_back(x);
	}
    std::nth_element(v.begin(), v.begin() + k-1, v.end());
	printf("%lld",v[k-1]);
}
