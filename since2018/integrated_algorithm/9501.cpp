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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,d;
		scanf("%d%d",&n,&d);
		int i,j;
		int cnt=0;
		for(i=0;i<n;i++){
			int v,f,c;
			scanf("%d%d%d",&v,&f,&c);
			if(v*1.0*f/c>=d){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
