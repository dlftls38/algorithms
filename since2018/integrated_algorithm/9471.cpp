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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int tc;
	scanf("%d",&tc);
	int i,j;
	for(i=1;i<=tc;i++){
		int n,m;
		scanf("%d%d",&n,&m);
		int a=0;
		int b=1;
		int ans=0;
		while(1){
			int temp=b;
			b=(a+b)%m;
			a=temp;
			ans++;
			if(a==0 && b==1){
				break;
			}
		}
		printf("%d %d\n",n,ans);
	}
}
