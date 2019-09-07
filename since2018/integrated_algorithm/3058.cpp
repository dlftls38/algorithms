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
int a[1000];
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int i,j;
		int sum=0;
		int minv=INT_MAX;
		for(i=0;i<7;i++){
			int temp;
			scanf("%d",&temp);
			if(temp%2==0){
				sum+=temp;
				minv=min(minv,temp);
			}
		}
		printf("%d %d\n",sum,minv);
	}
}
