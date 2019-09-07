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
	vector<pair<int,int> >v;
	for(i=0;i<n;i++){
		char query[10]={0};
		scanf("%s",query);
		if(strcmp(query,"order")==0){
			int table,order_time;
			scanf("%d%d",&table,&order_time);
			v.push_back({order_time,table});
		}
		else if(strcmp(query,"sort")==0){
			sort(v.begin(),v.end());
		}
		else{
			int table;
			scanf("%d",&table);
			int size=v.size();
			for(j=0;j<size;j++){
				if(v[j].second==table){
					v.erase(v.begin()+j);
					break;
				}
			}
		}
		for(auto it : v){
			printf("%d ",it.second);
		}
		if(v.size()==0){
			printf("sleep");
		}
		printf("\n");
	}
}
