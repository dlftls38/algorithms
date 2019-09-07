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
	int tc;
	scanf("%d",&tc);
	int i,j;
	for(i=1;i<=tc;i++){
		string s;
		cin>>s;
		int len=s.length();
		if(s[len-1]=='y' || s[len-1]=='Y'){
			printf("Case #%d: %s is ruled by nobody.\n",i,s.c_str());
		}
		else if(s[len-1]=='a' || s[len-1]=='e' || s[len-1]=='i' || s[len-1]=='o' || s[len-1]=='u' || s[len-1]=='A' || s[len-1]=='E' || s[len-1]=='I' || s[len-1]=='O' || s[len-1]=='U'){
			printf("Case #%d: %s is ruled by a queen.\n",i,s.c_str());
		}
		else{
			printf("Case #%d: %s is ruled by a king.\n",i,s.c_str());
		}
	}
}
