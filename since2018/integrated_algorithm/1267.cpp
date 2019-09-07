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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int y=0,m=0;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		y+=temp/30+1;
		m+=temp/60+1;
	}
	y*=10;
	m*=15;
	if(y==m){
		printf("Y M %d",y);
	}
	else{
		if(y<m){
			printf("Y %d",y);
		}
		else{
			printf("M %d",m);
		}
	}
}
