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
	int i,j;
	long long w[12]={0};
	w[0]=10;
	for(i=1;i<12;i++){
		w[i]=w[i-1]*10;
	}
	while(1){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		if(a+b==0){
			break;
		}
		int ans=0;
		for(i=0;i<12;i++){
			if((a%w[i]+b%w[i])/w[i]>0){
				ans++;
			}
		}
		printf("%d\n",ans);
	}
}
