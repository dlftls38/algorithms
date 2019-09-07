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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		int check[102]={0};
		int y[102]={0};
		int x[102]={0};
		for(i=0;i<n+2;i++){
			scanf("%d%d",&y[i],&x[i]);
		}
		queue<pair<pair<int,int>,int> >q;
		q.push(make_pair(make_pair(y[0],x[0]),0));
		check[0]=1;
		int ans=0;
		while(!q.empty()){
			int cur_y=q.front().first.first;
			int cur_x=q.front().first.second;
			int cur_pos=q.front().second;
			q.pop();
			if(cur_pos==n+1){
				ans=1;
				break;
			}
			for(i=0;i<n+2;i++){
				if(check[i]==0 && abs(cur_y-y[i])+abs(cur_x-x[i])<=1000){
					check[i]=1;
					q.push(make_pair(make_pair(y[i],x[i]),i));
				}
			}
		}
		if(ans==1){
			printf("happy\n");
		}
		else{
			printf("sad\n");
		}
	}
}
