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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int v,e;
		scanf("%d%d",&v,&e);
		printf("%d\n",2+e-v);
	}
}
