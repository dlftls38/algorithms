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
	for(i=0;i<26;i++){
		int start;
		for(j=0;j<len;j++){
			if(s[j]==i+'A'){
				start=j;
				break;
			}
		}
		int cnt[26]={0};
		for(j=start+1;j<len;j++){
			if(s[j]==i+'A'){
				break;
			}
			else{
				cnt[s[j]-'A']++;
			}
		}
		for(j=0;j<26;j++){
			if(cnt[j]==1)ans++;
		}
	}
	printf("%d",ans/2);
}
