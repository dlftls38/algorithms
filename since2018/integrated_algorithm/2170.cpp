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
	int n;
	scanf("%d",&n);
	int i,j;
	int x1,x2;
	int ans=0;
	vector<pair<int, int> >v;
	int a,b;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++){
		a=v[i].first;
		b=v[i].second;
		if(i==0){
			x1=a;
			x2=b;
		}
		else{
			if(a<=x2){
				if(x2<b)
					x2=b;
			}
			else{
				ans+=x2-x1;
				x1=a;
				x2=b;
			}
		}
		if(i==n-1){
			ans+=x2-x1;
		}
	}
	printf("%d",ans);
}
