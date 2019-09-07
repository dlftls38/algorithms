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
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&m);
		int i,j;
		int psum[10000]={0};
		for(i=0;i<m;i++){
			scanf("%d",&psum[i]);
			if(i>0){
				psum[i]+=psum[i-1];
			}
		}
		queue<pair<int,int> >q;
		for(i=0;i<m;i++){
			if(psum[m-1]%psum[i]==0){
				q.push(make_pair(psum[i],i));
			}
		}
		int ans=INT_MAX;
		int len=q.size();
		for(i=0;i<len;i++){
			int len2=q.front().second;
			int val=q.front().first;
			q.pop();
			int count=1;
			for(j=len2+1;j<m;j++){
				if(psum[j]%val==0){
					count++;
				}
			}
			if(count==psum[m-1]/val){
				ans=min(ans,val);
			}
		}
		printf("%d\n",ans);
	}
}
