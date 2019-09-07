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
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0 && y>0){
		printf("1");
	}
	else if(x>0 && y<0){
		printf("4");
	}
	else if(x<0 && y<0){
		printf("3");
	}
	else if(x<0 && y>0){
		printf("2");
	}
}
