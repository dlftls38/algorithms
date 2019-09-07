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
	int cur=0;
	int ans=0;
	int i;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if(cur==temp){
			ans++;
			cur++;
			if(cur==3)cur=0;
		}
	}
	printf("%d",ans);
}
