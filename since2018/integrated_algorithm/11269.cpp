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
	int ans=0;
	for(int i=0;i<len;i++){
		if(i%3==0){
			if(s[i]!='P')ans++;
		}
		else if(i%3==1){
			if(s[i]!='E')ans++;
		}
		else{
			if(s[i]!='R')ans++;
		}
	}
	printf("%d",ans);
}
