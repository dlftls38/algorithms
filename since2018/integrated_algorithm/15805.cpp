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
int input[212121];
int parent[212121];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		parent[i]=-1;
	}
	int cnt=1;
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
		if(parent[input[i]]==-1 && input[i]!=input[0]){
			parent[input[i]]=input[i-1];
			cnt++;
		}
	}
	printf("%d\n",cnt);
	for(i=0;i<cnt;i++){
		printf("%d ",parent[i]);
	}
}
