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
int a[500000];
int check[4001];
int check2[4001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<0){
			check2[-a[i]]++;
		}
		else{
			check[a[i]]++;	
		}
		sum+=a[i];
	}
	priority_queue<pair<int, int> >pq;
	pq.push(make_pair(check[0],0));
	for(i=1;i<=4000;i++){
		pq.push(make_pair(check[i],i));
		pq.push(make_pair(check2[i],-i));
	}
	vector<int>ans;
	ans.push_back(pq.top().second);
	int count=pq.top().first;
	pq.pop();
	while(!pq.empty()){
		if(count==pq.top().first){
			ans.push_back(pq.top().second);
			pq.pop();
		}
		else{
			break;
		}
	}
	int res;
	if(ans.size()==1){
		res=ans[0];
	}
	else{
		res=ans[ans.size()-2];
	}
	printf("%.0f\n",(double)sum/n);
	sort(a,a+n);
	printf("%d\n",a[n/2]);
	printf("%d\n",res);
	printf("%d\n",a[n-1]-a[0]);
}
