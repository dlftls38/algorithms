#include <stdio.h>
#include <algorithm>
long long a[1000001];
int n,m;
int bsearch(int first, int end){
	if (first+1>=end){
		return first;
	}
	long long key=0;
	int i;
	for(i=0;i<n;i++){
		if((first+end)/2<=a[i]){
			key+=a[i]-(first+end)/2;
		}
	}
	if(key>=m){
		bsearch((first+end)/2,end);
	}
	else if(key<m){
		bsearch(first,(first+end)/2);
	}
}
int main(){
	scanf("%d",&n);
	scanf("%d",&m);
	int i;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	printf("%d",bsearch(0,1000000000));
}
