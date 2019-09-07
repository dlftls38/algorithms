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
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		int a[10001]={0};
		int i,j;
		for(i=0;i<n*4;i++){
			int temp;
			scanf("%d",&temp);
			a[temp]++;
		}
		vector<pair<int,int> >v;
		for(i=1;i<=10000;i++){
			if(a[i]>0){
				v.push_back({i,a[i]});
			}
		}
		int vlen=v.size();
		int check=0;
		int plus=0;
		if(vlen%2==1)plus=1;
		int ab=v[0].first*v[vlen-1].first;
		for(i=0;i<vlen/2+plus;i++){
			if(ab==v[i].first*v[vlen-1-i].first && v[i].second==v[vlen-1-i].second && v[vlen-1-i].second%2==0){
				
			}
			else{
				check=1;
			}
		}
		if(check==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
