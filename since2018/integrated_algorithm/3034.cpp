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
	int n,w,h;
	scanf("%d%d%d",&n,&w,&h);
	int i;
	for(i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		if(k<=sqrt(w*w+h*h)){
			printf("DA\n");
		}
		else{
			printf("NE\n");
		}
	}
}
