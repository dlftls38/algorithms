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
bool inside(int x1,int x2,int k){
	if(x1<=k && x2>=k){
		return true;
	}
	return false;
}
bool outside(int x1,int x2,int k){
	if(x1<=k && x2>=k){
		return false;
	}
	return true;
}
int main(){
	int x1,x2,y1,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int x3,x4,y3,y4;
	scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
	int x5,x6,y5,y6;
	scanf("%d%d%d%d",&x5,&y5,&x6,&y6);
	if(x3<=x1 && y3<=y1 && x4>=x2 && y4>=y2){
		printf("NO");
		return 0;
	}
	if(x3>=x1 && x3<=x2 && x4>=x2 && y3<=y1 && y4>=y2){
		x2=x3;
	}
	else if(x4>=x1 && x4<=x2 && x3<=x1 && y3<=y1 && y4>=y2){
		x1=x4;
	}
	else if(y3>=y1 && y3<=y2 && y4>=y2 && x3<=x1 && x4>=x2){
		y2=y3;
	}
	else if(y4>=y1 && y4<=y2 && y3<=y1 && x3<=x1 && x4>=x2){
		y1=y4;
	}
	//printf("%d %d %d %d\n",x1,y1,x2,y2);
	if(x5<=x1 && y5<=y1 && x6>=x2 && y6>=y2){
		printf("NO");
		return 0;
	}
	printf("YES");
}
