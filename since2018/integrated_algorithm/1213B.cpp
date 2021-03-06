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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		stack<int>s;
		int ans=0;
		for(i=0;i<n;i++){
			int a;
			scanf("%d",&a);
			if(s.empty()){
				s.push(a);
			}
			else{
				while(!s.empty() && s.top()>a){
					ans++;
					s.pop();
				}
				s.push(a);
			}
		}
		printf("%d\n",ans);
		
	}
}
