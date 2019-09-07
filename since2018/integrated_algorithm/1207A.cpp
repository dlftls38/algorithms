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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int b,p,f;
		scanf("%d%d%d",&b,&p,&f);
		int h,c;
		scanf("%d%d",&h,&c);
		if(h<c){
			swap(h,c);
			swap(p,f);
		}
		int ans=0;
		b/=2;
		int t=min(b,p);
		ans+=t*h;
		b-=t;
		p-=t;
		ans+=min(b,f)*c;
		printf("%d\n",ans);
	}
}
