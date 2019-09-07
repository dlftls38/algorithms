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
	string s;
	scanf("%d",&n);
	cin>>s;
	int i;
	int ans=1;
	for(i=1;i<n-1;i++){
		if(s[i]=='W' && s[i+1]=='E'){
			ans++;
		}
	}
	printf("%d",ans);
}
