#include <stdio.h>
#include <algorithm>
using namespace std;
pair <int,int> a[100000];
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i].first,&a[i].second);
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		printf("%d %d\n",a[i].first,a[i].second);
	}
}
