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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	string s;
	cin>>s;
	int q;
	cin>>q;
	int i;
	set<int>check[26];
	int len=s.length();
	for(i=0;i<len;i++){
		check[s[i]-'a'].insert(i);
	}
	while(q--){
		int w;
		cin>>w;
		if(w==1){
			int pos;
			char c;
			cin>>pos>>c;
			pos--;
			check[s[pos]-'a'].erase(pos);
			s[pos]=c;
			check[c-'a'].insert(pos);
			
		}
		else if(w==2){
			int l,r;
			cin>>l>>r;
			l--;
			r--;
			int cnt=0;
			for(i=0;i<26;i++){
				auto position = check[i].lower_bound(l);
				if(position!=check[i].end() && *position<=r){
					cnt++;
				}
			}
			printf("%d\n",cnt);
		}
	}
}
