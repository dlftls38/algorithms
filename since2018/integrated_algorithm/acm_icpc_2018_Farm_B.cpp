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
	int a,b,n,w;
	cin>>a>>b>>n>>w;
	int i,j;
	int sheep;
	int goat;
	int cnt=0;
	for(i=1;i<n;i++){
		if(i*a+(n-i)*b==w){
			cnt++;
			sheep=i;
			goat=n-i;
		}
	}
	if(cnt==1){
		printf("%d %d",sheep,goat);
	}
	else{
		printf("-1");
	}
}
