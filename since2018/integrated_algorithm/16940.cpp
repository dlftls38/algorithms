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
vector<int>link[100001];
pair<int,int> check[100001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n-1;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		link[a].push_back(b);
		link[b].push_back(a);
	}
	vector<int>ans;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		ans.push_back(x);
	}
	check[1].first=1;
	check[1].second=1;
	int last=0;
	int line=1;
	for(i=0;i<n;i++){
		if(check[ans[i]].first==0 || check[ans[i]].second<last){
			printf("0");
			return 0;
		}
		last=check[ans[i]].second;
		int size=link[ans[i]].size();
		for(j=0;j<size;j++){
			if(check[link[ans[i]][j]].first==0){
				check[link[ans[i]][j]].first=1;
				check[link[ans[i]][j]].second=line+1;
			}
		}
		line++;
	}
	printf("1");
}
