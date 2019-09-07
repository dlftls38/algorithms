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
	int a,b,c,d,t;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&t);
	if(abs(a-c)+abs(b-d)<=t && (abs(a-c)+abs(b-d)-t)%2==0){
		printf("Y");
	}
	else{
		printf("N");
	}
}
