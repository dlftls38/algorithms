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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int n,k;
	cin>>n>>k;
	int a[1000];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k)ans++;
		}
	}
	printf("%d",ans);
}
