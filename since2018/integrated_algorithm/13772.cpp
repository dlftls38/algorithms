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
	int n;
	scanf("%d",&n);
	cin.ignore();
	int i,j;
	int cost[100]={0};
	cost['A']=1;
	cost['B']=2;
	cost['D']=1;
	cost['O']=1;
	cost['P']=1;
	cost['Q']=1;
	cost['R']=1;
	for(i=0;i<n;i++){
		string s;
		getline(cin,s);
		int ans=0;
		for(auto it : s){
			ans+=cost[it];
		}
		printf("%d\n",ans);
	}
}
