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
	int small=1,big=1,number=1,special=1;
	int ans=0;
	int i;
	for(i=0;i<n;i++){
		if(s[i]>='a' && s[i]<='z'){
			small=0;
		}
		if(s[i]>='A' && s[i]<='Z'){
			big=0;
		}
		if(s[i]>='0' && s[i]<='9'){
			number=0;
		}
		if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='-' || s[i]=='+'){
			special=0;
		}
	}
	ans+=small+big+number+special;
	if(n+ans<6)ans+=6-n-ans;
	printf("%d",ans);
}
