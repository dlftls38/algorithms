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
int ans[212121];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		string str;
		cin>>str;
		stack<pair<char,int>>s;
		int i,j;
		int small=INF;
		for(i=0;i<n;i++){
			if(small<str[i]){
				continue;
			}
			else if(s.empty()){
				s.push({str[i],i});
			}
			else{
				if(s.top().first<=str[i]){
					s.push({str[i],i});
				}
				else{
					while(!s.empty() && s.top().first>str[i]){
						small=min(small,(int)(s.top().first));
						s.pop();
					}
					s.push({str[i],i});
				}
			}
		}
		while(!s.empty()){
			ans[s.top().second]=1;
			s.pop();
		}
		for(i=0;i<n;i++){
			if(ans[i]!=0){
				continue;
			}
			else if(s.empty()){
				s.push({str[i],i});
			}
			else{
				if(s.top().first<=str[i]){
					s.push({str[i],i});
				}
				else{
					while(!s.empty() && s.top().first>str[i]){
						s.pop();
					}
					s.push({str[i],i});
				}
			}
		}
		while(!s.empty()){
			ans[s.top().second]=2;
			s.pop();
		}
		int check=0;
		for(i=0;i<n;i++){
			if(ans[i]==0){
				check=1;
				break;
			}
		}
		if(check==0){
			for(i=0;i<n;i++){
				printf("%d",ans[i]);
			}
			printf("\n");
		}
		else{
			printf("-\n");
		}
		for(i=0;i<n;i++){
			ans[i]=0;
		}
	}
}
