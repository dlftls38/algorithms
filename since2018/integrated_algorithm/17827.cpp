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
	int n,m,v;
	cin>>n>>m>>v;
	vector<int>c(n+1);
	int i;
	for(i=1;i<=n;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<m;i++){
		int k;
		scanf("%d",&k);
		if(k<n){
			printf("%d\n",c[1+k]);
		}
		else{
			k-= v-1;
			k%= (n-v+1);
			k+= v;
			printf("%d\n",c[k]);
		}
	}
}
