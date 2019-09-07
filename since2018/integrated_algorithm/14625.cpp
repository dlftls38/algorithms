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
	int sh,sm;
	int eh,em;
	scanf("%d%d%d%d",&sh,&sm,&eh,&em);
	int i,j;
	int n=0;
	scanf("%d",&n);
	int ans=0;
	while(1){
		if(sh%10==n)ans++;
		else if(sh/10==n)ans++;
		else if(sm%10==n)ans++;
		else if(sm/10==n)ans++;
		if(sh==eh && sm==em){
			break;
		}
		sm++;
		if(sm==60){
			sh++;
			sm=0;
		}
	}
	printf("%d",ans);
}
