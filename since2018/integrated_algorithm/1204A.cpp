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
	string s;
	cin>>s;
	int i,j;
	int len=s.length();
	int ans=len/2;
	int cnt=0;
	for(i=len-1;i>=0;i--){
		if(s[i]=='1')cnt++;
	}
	if(cnt>1 && len%2==1)ans++;
	printf("%d",ans);
}
