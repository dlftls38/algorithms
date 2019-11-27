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
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int x3,y3,x4,y4;
	scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
	int w,h;
	scanf("%d%d",&w,&h);
	if((y3-h>=y1 || y4+h<=y2) && w<=x2-x1 ||
		h<=y2-y1 && (x3-w>=x1 || x4+w<=x2)
	)printf("Yes");
	else{
		printf("No");
	}
}
