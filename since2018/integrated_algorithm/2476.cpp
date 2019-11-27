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
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a==b && b==c){
			ans=max(ans,10000+a*1000);
		}
		else if(a==b){
			ans=max(ans,1000+a*100);
		}
		else if(a==c){
			ans=max(ans,1000+a*100);
		}
		else if(c==b){
			ans=max(ans,1000+b*100);
		}
		else{
			ans=max(ans,max(max(a,b),c)*100);
		}
	}
	printf("%d",ans);
}
