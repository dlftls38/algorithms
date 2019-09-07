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
int a[200010];
int main(){
	int n;
	scanf("%d",&n);
	a[1]=1;
	a[n+1]=2;
	a[2]=2*n;
	a[n+2]=2*n-1;
	int i;
	for(i=3;i<=n;i++){
		if(i%2==1){
			a[i]=a[i-1]-3;
			a[i+n]=a[i]+1;
		}
		else{
			a[i]=a[i-1]-1;
			a[i+n]=a[i]-1;
		}
	}
	if(a[n]-a[n+n]==a[n+1]-a[1]){
		printf("NO");
		return 0;
	}
	printf("YES\n");
	for(i=1;i<=2*n;i++){
		printf("%d ",a[i]);
	}
}
