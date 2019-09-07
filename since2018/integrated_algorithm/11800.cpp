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
	string d[7]={"","Yakk","Doh","Seh","Ghar","Bang","Sheesh"};
	string dd[7]={"","Habb Yakk","Dobara","Dousa","Dorgy","Dabash","Dosh"};
	int tc;
	scanf("%d",&tc);
	int i,j;
	for(i=1;i<=tc;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a==6 && b==5 || a==5 && b==6){
			printf("Case %d: Sheesh Beesh\n",i);
			continue;
		}
		if(a==b){
			printf("Case %d: %s\n",i,dd[a].c_str());
		}
		else if(a>b){
			printf("Case %d: %s %s\n",i,d[a].c_str(),d[b].c_str());
		}
		else{
			printf("Case %d: %s %s\n",i,d[b].c_str(),d[a].c_str());
		}
	}
}	
