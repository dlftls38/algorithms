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
	while(tc--){
		int n;
		scanf("%d",&n);
		char s[101]={0};
		scanf("%s",s);
		int ans=0;
		if(n<12)ans=1;
		int check=0;
		int i;
		for(i=0;i<n;i++){
			if(s[i]>='A' && s[i]<='Z'){
				check=1;
			}
		}
		if(check==0)ans=1;
		check=0;
		for(i=0;i<n;i++){
			if(s[i]>='a' && s[i]<='z'){
				check=1;
			}
		}
		if(check==0)ans=1;
		check=0;
		for(i=0;i<n;i++){
			if(s[i]>='0' && s[i]<='9'){
				check=1;
			}
		}
		if(check==0)ans=1;
		check=0;
		for(i=0;i<n;i++){
			if(s[i]=='+' || s[i]=='_' || s[i]==')' || s[i]=='(' || s[i]=='*' || s[i]=='&' || s[i]=='^' || s[i]=='%' || s[i]=='$' || s[i]=='#' || s[i]=='@' || s[i]=='!' || s[i]=='.' || s[i]=='/' || s[i]==',' || s[i]==';' || s[i]=='{' || s[i]=='}'){
				check=1;
			}
		}
		if(check==0)ans=1;
		if(ans==1){
			printf("invalid\n");
		}
		else{
			printf("valid\n");
		}
	}
}
