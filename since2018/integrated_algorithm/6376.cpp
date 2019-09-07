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
	int i,j;
	printf("n e\n");
	printf("- -----------\n");
	for(i=0;i<=9;i++){
		double parent=1;
		double e=0;
		for(j=0;j<=i;j++){
			if(j<=1)
				parent*=1;
			else
				parent*=j;
			e+=1.0/parent;
		}
		if(i<=1)
			printf("%d %.0f\n",i,e);
		else if(i==2)
			printf("%d %.1f\n",i,e);
		else
			printf("%d %.9f\n",i,e);
	}
}
