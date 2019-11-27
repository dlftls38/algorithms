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
	int m,k;
	scanf("%d%d",&m,&k);
	vector<int>v;
	int i,j;
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int sum=0;
	int cnt=0;
	for(auto it : v){
		sum+=it;
		cnt++;
		if(sum>=m*k){
			printf("%d",cnt);
			return 0;
		}
	}
	printf("STRESS");
}
