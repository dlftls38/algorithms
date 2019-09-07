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
vector<pair<int,int> >v;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	for(i=0;i<n;i++){
		int count=1;
		for(j=0;j<n;j++){
			if(j!=i && v[j].first>v[i].first && v[j].second>v[i].second){
				count++;
			}
		}
		printf("%d ",count);
	}
}
