#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
int a[200001]={0};
multiset<int> b;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		b.insert(x);
	}
	for(i=0;i<n;i++){
		multiset<int>::iterator it=b.lower_bound(n-a[i]);
		if(it==b.end())
			it=b.begin();
		printf("%d ",(a[i]+*it)%n);
		b.erase(it);
	}
}
