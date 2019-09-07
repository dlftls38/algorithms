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
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	vector<int>v;
	for(i=0;i<n;i++){
		v.push_back(i);
	}
	int cur=0;
	for(i=0;i<k;i++){
		int x;
		scanf("%d",&x);
		cur+=x;
		cur%=n;
		printf("%d ",v[cur]+1);
		v.erase(v.begin()+cur);
		n--;
		if(cur==n){
			cur=0;
		}
	}
}
