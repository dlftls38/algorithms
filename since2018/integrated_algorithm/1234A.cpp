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
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int sum=0;
		int nn=n;
		while(nn--){
			int x;
			cin>>x;
			sum+=x;
		}
		printf("%d\n",sum/n+(sum%n>0?1:0));
	}
}
