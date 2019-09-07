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
int ccw(int x1, int y1, int x2, int y2, int x3, int y3){
    int temp = x1*y2+x2*y3+x3*y1;
    temp = temp - y1*x2-y2*x3-y3*x1;
    if (temp > 0) {
        return 1;  // 반시계 방향 
    } else if (temp < 0) {
        return -1; // 시계 방향 
    } else {
        return 0; // 일직선 
    }
}
int main(){
	int x1,y1,x2,y2,x3,y3;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if(ccw(x1,y1,x2,y2,x3,y3)!=0){
		printf("WINNER WINNER CHICKEN DINNER!");
	}
	else{
		printf("WHERE IS MY CHICKEN?");
	}
}
