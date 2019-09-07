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
	int n,m;
	scanf("%d%d",&m,&n);
	int i,j;
	int small=INT_MAX;
	int sum=0;
	int cur=1;
	while(cur*cur<=n){
		if(cur*cur>=m){
			sum+=cur*cur;
			small=min(small,cur*cur);
		}
		cur++;
	}
	if(INT_MAX==small){
		printf("-1");
	}
	else{
		printf("%d\n%d",sum,small);
	}
}
