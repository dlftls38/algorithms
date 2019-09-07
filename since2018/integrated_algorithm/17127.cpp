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
int n;
int a[10];
int solve(int cur,int pos){
	if(pos==-1){
		return 0;
	}
	int i;
	int ans=0;
	int temp=1;
	for(i=cur;i<n-pos;i++){
		temp*=a[i];
		ans=max(ans,temp+solve(i+1,pos-1));
	}
	return ans;
}
int main(){
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",solve(0,3));
}
