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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int q;
	cin>>q;
	while(q--){
		int h,n;
		cin>>h>>n;
		int i,j;
		vector<int>v;
		for(i=0;i<n;i++){
			int p;
			cin>>p;
			v.push_back(p);
		}
		v.push_back(0);
		int ans=0;
		int cur=h;
		int of=1;
		for(i=1;i<=n;i++){
			if(cur-v[i]==1){
				of=0;
			}
			else{
				if(of==1){
					of=0;
					cur=v[i]+1;
				}
				else{
					if(cur-v[i]>2){
						ans++;
						cur=v[i]+1;
						of=0;
					}
					else{
						cur=v[i];
						of=1;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
}
