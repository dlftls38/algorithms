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
	int len=s.length();
	int i,j;
	int ans=0;
	int cnt=0;
	for(i=0;i<len;i++){
		if(cnt==0 && s[i]=='H'){
			cnt=1;
		}
		else if(cnt==1 && s[i]=='O'){
			cnt=2;
		}
		else if(cnt==2 && s[i]=='N'){
			cnt=3;
		}
		else if(cnt==3 && s[i]=='I'){
			cnt=0;
			ans++;
		}
	}
	printf("%d",ans);
}
