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
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		int pen=0;
		int pencil=0;
		pen+=a/c;
		pencil+=b/d;
		pen+=(a%c>0?1:0);
		pencil+=(b%d>0?1:0);
		int sum=pen+pencil;
		if(sum>k){
			printf("-1\n");
		}
		else{
			printf("%d %d\n",pen,pencil);
		}
	}
}
