#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
vector<int>v[100001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n-1;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		v[q].push_back(w);
		v[w].push_back(q);
	}
	int check=1;
	for(i=1;i<=n;i++){
		if(v[i].size()==2){
			check=0;
		}
	}
	if(check==0){
		printf("NO");
	}
	else{
		printf("YES");
	}
}
