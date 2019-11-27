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
	int ans=1;
	int i,j;
	int cnt=1;
	for(i=3;;i+=2){
		int temp=0;
		for(j=1;j<i;j+=2){
			temp+=j*2;
		}
		temp+=j;
		if(cnt+temp<=n){
			cnt+=temp;
		}
		else{
			break;
		}
		ans++;
	}
	printf("%d",ans);
}
