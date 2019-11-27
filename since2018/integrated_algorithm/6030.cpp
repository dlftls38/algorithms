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
	int p,q;
	scanf("%d%d",&p,&q);
	int i,j;
	set<int>a;
	set<int>b;
	for(i=1;i*i<=p;i++){
		if(p%i==0){
			a.insert(i);
			a.insert(p/i);
		}
	}
	for(i=1;i*i<=q;i++){
		if(q%i==0){
			b.insert(i);
			b.insert(q/i);
		}
	}
	for(auto it : a){
		for(auto it2 : b){
			printf("%d %d\n",it,it2);
		}
	}
}
