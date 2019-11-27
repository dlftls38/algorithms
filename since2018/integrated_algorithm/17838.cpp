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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()!=7){
			printf("0\n");
			continue;
		}
		if(s[0]==s[1] && s[1]==s[4] && s[2]==s[3] && s[3]==s[5] && s[5]==s[6] && s[1]!=s[2]){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
}
