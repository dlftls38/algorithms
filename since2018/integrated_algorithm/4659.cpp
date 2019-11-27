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
	while(1){
		char s[30]={0};
		scanf("%s",s)==1;
		if(strcmp(s,"end")==0)break;
		int len=strlen(s);
		int check=0;
		int ans=0;
		int i,j;
		map<char,int>mp;
		mp['a']=1;
		mp['e']=1;
		mp['i']=1;
		mp['o']=1;
		mp['u']=1;
		for(i=0;i<len;i++){
			if(mp[s[i]]==1){
				check=1;
			}
			if(i>=2){
				if(mp[s[i-2]]+mp[s[i-1]]+mp[s[i]]==3 || mp[s[i-2]]+mp[s[i-1]]+mp[s[i]]==0){
					ans=1;
				}
			}
			if(i>=1){
				if(s[i-1]==s[i] && s[i]!='e' && s[i]!='o'){
					ans=1;
				}
			}
		}
		if(check==0){
			ans=1;
		}
		if(ans){
			printf("<%s> is not acceptable.\n",s);
		}
		else{
			printf("<%s> is acceptable.\n",s);
		}
	}
}
