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
	int a[10]={0};
	int n;
	scanf("%d",&n);
	int i,j;
	set<pair<int,int>>s;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s.insert(make_pair(a[i],i));
	}
	int money;
	scanf("%d",&money);
	deque<int>dq;
	for(auto it : s){
		while(money>=it.first){
			money-=it.first;
			dq.push_back(it.second);
		}
	}
	int mn=INT_MAX;
	int val;
	for(i=1;i<n;i++){
		if(mn>a[i]){
			mn=a[i];
			val=i;
		}
	}
	if(dq.front()==0){
		while(money<mn && dq.size()!=0){
			dq.pop_back();
			money+=a[0];
		}
		if(money<mn){
			printf("0");
			return 0;
		}
		else{
			dq.push_front(val);
			money-=mn;
		}
	}
	int ans[100]={0};
	int len=dq.size();
	for(i=0;i<len;i++){
		ans[i]=dq.front();
		dq.pop_front();
	}
	for(i=0;i<len;i++){
		for(j=n-1;j>=0;j--){
			if(a[ans[i]]+money>=a[j]){
				money=money+a[ans[i]]-a[j];
				ans[i]=j;
				break;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d",ans[i]);
	}
}
