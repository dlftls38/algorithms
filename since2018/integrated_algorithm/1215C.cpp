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
void swap(char* a,char* b){
	char tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int n;
	scanf("%d",&n);
	string s,t;
	cin>>s>>t;
	int i,j;
	int a[26]={0};
	vector<int>ss[26];
	vector<int>tt[26];
	int s_pos[26]={0};
	int t_pos[26]={0};
	for(i=0;i<n;i++){
		a[s[i]-'a']++;
		a[t[i]-'a']++;
		ss[s[i]-'a'].push_back(i);
		tt[t[i]-'a'].push_back(i);
	}
	for(i=0;i<26;i++){
		if(a[i]%2==1){
			printf("-1");
			return 0;
		}
	}
	vector<pair<int,int>>ans;
	for(i=0;i<n;i++){
		printf("%s\n%s\n",s.c_str(),t.c_str());
		if(s[i]!=t[i]){
			int s_word=s[i]-'a';
			while(!ss[s_word].empty() && ss[s_word].size()>s_pos[s_word] && ss[s_word][s_pos[s_word]]<=i){
				s_pos[s_word]++;
			}
			if(ss[s_word].size()>s_pos[s_word]){
				ans.push_back({ss[s_word][s_pos[s_word]]+1,i+1});
				swap(s[ss[s_word][s_pos[s_word]]],t[i]);
				continue;
			}
			ans.push_back({tt[s_word][t_pos[s_word]]+1,tt[s_word][t_pos[s_word]]+1});
			ans.push_back({tt[s_word][t_pos[s_word]]+1,i+1});
			swap(s[tt[s_word][t_pos[s_word]]],t[tt[s_word][t_pos[s_word]]]);
			swap(t[i],s[tt[s_word][t_pos[s_word]]]);
			ss[t[i]-'a'].push_back(tt[s_word][t_pos[s_word]]);
			tt[s[tt[s_word][t_pos[s_word]]]-'a'].push_back(tt[s_word][t_pos[s_word]]);
			t_pos[s_word]++;
		}
	}
	printf("%s\n%s",s.c_str(),t.c_str());
}
