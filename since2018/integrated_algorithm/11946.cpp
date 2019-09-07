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
bool cmp(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b){
	if(a.first.first>b.first.first){
		return true;
	}
	else if(a.first.first==b.first.first){
		if(a.first.second<b.first.second){
			return true;
		}
		else if(a.first.second==b.first.second){
			if(a.second<b.second){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	int n,m,q;
	scanf("%d%d%d",&n,&m,&q);
	int i,j;
	int cnt[101][16]={0};
	int late[101][16]={0};
	int ans_time[101]={0};
	int ans_cnt[101]={0};
	for(i=0;i<q;i++){
		int time,team,problem;
		string result;
		scanf("%d%d%d",&time,&team,&problem);
		cin>>result;
		if(cnt[team][problem]==1){
			continue;
		}
		if(result.compare("AC")==0){
			cnt[team][problem]=1;
			ans_time[team]+=time+late[team][problem]*20;
			ans_cnt[team]++;
		}
		else{
			late[team][problem]++;
		}
	}
	vector<pair<pair<int,int>,int> >v;
	for(i=1;i<=n;i++){
		v.push_back({{ans_cnt[i],ans_time[i]},i});
	}
	sort(v.begin(),v.end(),cmp);
	for(auto it : v){
		printf("%d %d %d\n",it.second,it.first.first,it.first.second);;
	}
}
