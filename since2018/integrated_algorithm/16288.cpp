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
	int n,k;
	cin>>n>>k;
	priority_queue<int>pq[100];
	int i,j;
	for(i=0;i<n;i++){
		int p;
		cin>>p;
		int check=0;
		for(j=0;j<k;j++){
			if(pq[j].empty() || pq[j].top()<p){
				pq[j].push(p);
				check=1;
				break;
			}
		}
		if(check==0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
