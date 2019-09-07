#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int n;
vector<pair<string, int> >vv;
string target;
int bs(){
	int l=0;
	int r=n-1;
	int mid=(l+r)/2;
	while(l<=r){
		mid=(l+r)/2;
		int ans=target.compare(vv[mid].first);
		if(ans==0){
			return vv[mid].second;
		}
		else{
			if(ans<0){
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
	}
	return -1;
}
int main(){
	int m;
	scanf("%d%d",&n,&m);
	vector<string>v;
	int i,j;
	for(i=0;i<n;i++){
		char temp[21]={0};
		scanf("%s",temp);
		string s=temp;
		v.push_back(s);
		vv.push_back(make_pair(s,i+1));
	}
	sort(vv.begin(),vv.end());
	for(i=0;i<m;i++){
		char temp[21]={0};
		scanf("%s",temp);
		int x;
		if(temp[0]>='0' && temp[0]<='9'){
			x=atoi(temp);
			printf("%s\n",v[x-1].c_str());
		}
		else{
			target=temp;
			printf("%d\n",bs());
		}
	}
}
