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
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	int ans=0;
	for(i=0;i<k;i++){
		int x;
		scanf("%d",&x);
		ans+=x/2;
		ans+=x%2;
	}
	if(ans>=n){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
