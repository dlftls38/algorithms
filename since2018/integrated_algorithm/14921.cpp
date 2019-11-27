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
	int n;
	scanf("%d",&n);
	vector<int>v;
	int i,j;
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		v.push_back(a);
	}
	int s=0;
	int e=n-1;
	int ans=v[s]+v[e]-0;
	while(e-s>1){
        if(v[s]>=0){
			e--;
		}
		else if(v[e]<=0){
			s++;
		}
		else if(abs(v[s+1]+v[e]-0)<abs(v[s]+v[e-1]-0)){
			s++;
		}
		else{
			e--;
		}
		if(abs(ans)>abs(v[s]+v[e]-0)){
			ans=v[s]+v[e];
		}
	}
	printf("%d",ans);
}
