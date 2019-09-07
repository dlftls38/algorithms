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
	string s,t;
	cin>>s>>t;
	int i,j;
	string ans[]={"aa","ab","ac","bb","ba","bc","cc","ca","cb"};
	string a[]={"abca","acba","bacb","bcab","cabc","cbac"};
	int wron=0;
	int pos;
	for(i=0;i<6;i++){
		int check=0;
		for(j=0;j<3;j++){
			if(a[i][j]==s[0] && a[i][j+1]==s[1] || a[i][j]==t[0] && a[i][j+1]==t[1]){
				check=1;
			}
		}
		if(check==0){
			wron=1;
			pos=i;
			break;
		}
	}
	if(wron==0){
		printf("NO");
		return 0;
	}
	printf("YES\n");
	string aa[]={"abc","acb","bac","bca","cab","cba"};
	for(i=0;i<n;i++){
		printf("%s",aa[pos].c_str());
	}
}
