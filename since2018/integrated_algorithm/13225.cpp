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
	int c;
	scanf("%d",&c);
	while(c--){
		int n;
		scanf("%d",&n);
		int i,j;
		int ans=0;
		for(i=1;i<=n;i++){
			if(n%i==0){
				ans++;
			}
		}
		printf("%d %d\n",n,ans);
	}
}