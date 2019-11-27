#include<stdio.h>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#include<vector>
#include<set>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 16769023
using namespace std;
int main(){
	int n;
	long long w;
	scanf("%d%lld",&n,&w);
	int i,j;
	int a[123]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long coin=0;
	for(i=0;i<n;i++){
		if(a[i]<a[i+1] && coin==0){
			coin=w/a[i];
			w-=coin*a[i];
		}
		if(a[i]>a[i+1] && coin>0){
			w+=coin*a[i];
			coin=0;
		}
	}
	printf("%lld",w);
}
/*
15
100000
1
50
1
50
1
50
1
50
1
50
1
50
1
50
1
*/
