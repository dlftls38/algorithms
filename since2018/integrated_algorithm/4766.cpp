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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	vector<double>v;
	while(1){
		double temperate;
		cin>>temperate;
		if(temperate==999)break;
		v.push_back(temperate);
	}
	for(int i=0;i<v.size()-1;i++){
		printf("%.2f\n",v[i+1]-v[i]);
	}
}
