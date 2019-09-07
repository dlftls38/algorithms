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
using namespace std;
typedef pair<int,int> pii;
int a[1000][1000];
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second==b.second){
		return a.first<b.first;
	}
	return a.second<b.second;
}
int main(){
	int r,c,k;
	scanf("%d%d%d",&r,&c,&k);
	int i,j,l;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int y_size=3;
	int x_size=3;
	int cnt=0;
	while(cnt<=100 && a[r-1][c-1]!=k){
		cnt++;
		int filling[1000]={0};
		int max_size=0;
		if(y_size>=x_size){
			for(i=0;i<y_size;i++){
				map<int,int>mp;
				for(j=0;j<x_size;j++){
					if(a[i][j]!=0)
						mp[a[i][j]]++;
				}
				vector<pair<int,int> >v;
				for(auto it : mp){
					v.push_back({it.first,it.second});
				}
				sort(v.begin(),v.end(),cmp);
				filling[i]=v.size();
				for(j=0,l=0;j<filling[i];j++,l+=2){
					a[i][l]=v[j].first;
					a[i][l+1]=v[j].second;
				}
				max_size=max(max_size,filling[i]*2);
			}
			x_size=max_size;
			for(i=0;i<y_size;i++){
				for(j=filling[i]*2;j<x_size;j++){
					a[i][j]=0;
				}
			}
		}
		else{
			for(i=0;i<x_size;i++){
				map<int,int>mp;
				for(j=0;j<y_size;j++){
					if(a[j][i]!=0)
						mp[a[j][i]]++;
				}
				vector<pair<int,int> >v;
				for(auto it : mp){
					v.push_back({it.first,it.second});
				}
				sort(v.begin(),v.end(),cmp);
				filling[i]=v.size();
				for(j=0,l=0;j<filling[i];j++,l+=2){
					a[l][i]=v[j].first;
					a[l+1][i]=v[j].second;
				}
				max_size=max(max_size,filling[i]*2);
			}
			y_size=max_size;
			for(i=0;i<x_size;i++){
				for(j=filling[i]*2;j<y_size;j++){
					a[j][i]=0;
				}
			}
		}
	}
	printf("%d",cnt>100?-1:cnt);
}
