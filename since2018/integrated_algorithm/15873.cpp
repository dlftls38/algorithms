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
	int c;
	scanf("%d",&c);
	if(c/1000>0){
		printf("20");
	}
	else if(c/100>0){
		if(c%10==0){
			printf("%d",c/100+10);
		}
		else{
			printf("%d",c%10+10);
		}
	}
	else{
		printf("%d",c/10+c%10);
	}
}
