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
	int a,d,k;
	scanf("%d%d%d",&a,&d,&k);
	int i;
	for(i=0;i<2000000;i++){
		if(a+d*i==k){
			printf("%d",i+1);
			return 0;
		}
	}
	printf("X");
}
