#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
//#include <stack>
//#include <queue>
//#include <map>
//#include <limits.h>
//#include <functional>
//#include <math.h>
//#include <fstream>
//#include <set>
//#define INF 987654321
//#define MAX_VALUE 1000000000
//#define MOD 1000000009
//#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
vector<pair<int,int> >input;
vector<pair<int,int> >row[200002];
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int r,c;
		scanf("%d%d",&r,&c);
		input.push_back({r,c});
		row[r].push_back({c,1});
		row[r+1].push_back({c,3});
	}
	for(i=0;i<=100000;i++){
		sort(row[i].begin(),row[i].end());
	}
	int ans=n;
	for(i=0;i<n;i++){
		int y=input[i].first;
		int x=input[i].second;
		int len=row[y].size();
		int l=0;
		int r=len-1;
		int mid=(l+r)/2;
		while(l<=r){
			mid=(l+r)/2;
			if(row[y][mid].first==x){
				break;
			}
			else if(row[y][mid].first<x){
				l=mid+1;
			}
			else{
				r=mid-1;
			}
		}
		if(row[y][mid].second==3){
			continue;
		}
		for(j=mid-1;j>=0;j--){
			if(row[y][j].second==1){
				row[y][j].second=3;
				ans--;
			}
			else{
				break;
			}
		}
		for(j=mid+1;j<len;j++){
			if(row[y][j].second==1){
				row[y][j].second=3;
				ans--;
			}
			else{
				break;
			}
		}
	}
	printf("%d",ans);
	return 0;
}
