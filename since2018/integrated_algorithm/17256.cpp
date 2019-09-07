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
	int ax,ay,az;
	int cx,cy,cz;
	scanf("%d%d%d",&ax,&ay,&az);
	scanf("%d%d%d",&cx,&cy,&cz);
	printf("%d %d %d",cx-az,cy/ay,cz-ax);
}
