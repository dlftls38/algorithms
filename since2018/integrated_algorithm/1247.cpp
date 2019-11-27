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
	int t=3;
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		unsigned long long sum=0;
		vector<long long>a;
		vector<long long>b;
		for(i=0;i<n;i++){
			long long s;
			scanf("%lld",&s);
			if(s>0){
				a.push_back(s);
			}
			else if(s<0){
				b.push_back(-s);
			}
		}
		int aa=0;
		int bb=0;
		while(1){
			if(aa==a.size() || bb==b.size())break;
			if(a[aa]>=b[bb]){
				a[aa]-=b[bb];
				bb++;
				if(a[aa]==0){
					aa++;
				}
			}
			else{
				b[bb]-=a[aa];
				aa++;
				if(b[bb]==0){
					bb++;
				}
			}
		}
		if(aa<a.size()){
			printf("+\n");
		}
		else if(bb<b.size()){
			printf("-\n");
		}
		else{
			printf("0\n");
		}
	}
}
