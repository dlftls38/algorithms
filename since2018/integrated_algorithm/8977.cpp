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
	int n,k,b;
	scanf("%d%d%d",&n,&k,&b);
	b%=n;
	int i,j;
	int a[2000];
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n+1;i<2000;i++){
		a[i]=a[i-n];
	}
	int ans=0;
	if(b==0)b++;
	for(i=b;i<b+k;i++){
		ans+=a[i];
	}
	printf("%d",ans);
}
