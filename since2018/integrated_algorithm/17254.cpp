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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	set<pair<pair<int,int>,char> >s;
	for(i=0;i<m;i++){
		int a,b;
		char c,trash;
		scanf("%d%d%c%c",&a,&b,&trash,&c);
		s.insert({{b,a},c});
	}
	for(auto it : s){
		printf("%c",it.second);
	}
}
