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
	queue<int>q;
	scanf("%d",&n);
	int i;
	for(i=0;i<5*n;i++){
		char str[10]={0};
		scanf("%s",str);
		int k=(str[0]-'A')*1000;
		char *temp=strtok(str,"ABCDEFGHIJKLMNOPQRSTUVWXYZ-");
		while(temp!=NULL){
			k+=atoi(temp);
			temp=strtok(NULL,"ABCDEFGHIJKLMNOPQRSTUVWXYZ-");
		}
		q.push(k);
	}
	stack<int>s;
	vector<int>ans;
	vector<int>ans2;
	for(i=0;i<5*n;i++){
		if(s.empty()){
			s.push(q.front());
			q.pop();
		}
		else{
			if(q.front()>s.top()){
				ans.push_back(s.top());
				ans2.push_back(s.top());
				s.pop();
				i--;
			}
			else{
				s.push(q.front());
				q.pop();
			}
		}
	}
	while(!s.empty()){
		ans.push_back(s.top());
		ans2.push_back(s.top());
		s.pop();
	}
	sort(ans2.begin(),ans2.end());
	if(ans!=ans2){
		printf("BAD");
	}
	else{
		printf("GOOD");
	}
}
