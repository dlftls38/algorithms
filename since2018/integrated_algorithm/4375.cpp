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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	while(scanf("%d",&n)==1){
		long long temp=1;
		int ans=1;
		while(temp%n>0){
			ans++;
			temp=(temp*10+1)%n;
		}
		printf("%d\n",ans);
	}
}
