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
	long long n,p,w,d;
	cin>>n>>p>>w>>d;
	long long x=p/w;
	long long y=0;
	long long z=0;
	long long left_game=n-x;
	long long left_score=p-w*x;
	for(int i=0;i<10000000;i++){
		if(left_score%d==0 && left_game>=left_score/d){
			long long y=left_score/d;
			long long z=left_game-y;
			printf("%lld %lld %lld",x,y,z);
			return 0;
		}
		x--;
		left_game++;
		left_score+=w;
		if(x<0)break;
	}
	printf("-1");
}
