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
	int n;
	cin>>n;
	int i,j;
	vector<int>v;
	double mean=0,median=0;
	for(i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
		mean+=x;
	}
	sort(v.begin(),v.end());
	printf("%.9f\n",1.0*mean/n);
	if(n%2==1){
		printf("%.9f",1.0*v[n/2]);
	}
	else{
		printf("%.9f",1.0*(v[n/2]+v[n/2-1])/2);
	}
}
