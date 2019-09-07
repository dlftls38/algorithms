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
	int n,l,r;
	scanf("%d%d%d",&n,&l,&r);
	int min_ans=0;
	int max_ans=0;
	int i,j;
	int cur=2;
	for(i=0;i<l-1;i++){
		min_ans+=cur;
		cur*=2;
	}
	min_ans+=n-l+1;
	cur=1;
	for(i=0;i<r-1;i++){
		max_ans+=cur;
		cur*=2;
	}
	max_ans+=(n-r+1)*cur;
	printf("%d %d",min_ans,max_ans);
}
