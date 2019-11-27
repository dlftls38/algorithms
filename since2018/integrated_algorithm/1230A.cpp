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
	int a[4]={0};
	int i,j;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+4);	
	if(a[0]+a[3]==a[1]+a[2] || a[3]==a[0] + a[1]+a[2]){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
