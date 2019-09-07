#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int answer=0;
	stack<pair<int,int> >s;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(s.empty()){
			if(x!=0)
				s.push(pair<int,int>(x,1));
		}
		else if(s.top().first==x){
			int count=s.top().second;
			s.pop();
			s.push(pair<int,int>(x,count+1));
		}
		else if(s.top().first<x){
			s.push(pair<int,int>(x,1));
		}
		else if(s.top().first>x){
			while(1){
				answer=max(answer,s.top().first*s.top().second);
				int prev_value=s.top().first;
				int prev_count=s.top().second;
				s.pop();
				if(s.empty()){
					if(x!=0)
						s.push(pair<int,int>(x,prev_count+1));
					break;
				}
				else if(s.top().first<x){
					s.push(pair<int,int>(x,prev_count+1));
					break;
				}
				else if(s.top().first==x){
					int current_count=s.top().second;
					s.pop();
					s.push(pair<int,int>(x,current_count+prev_count+1));
					break;
				}
				else if(s.top().first>x){
					int current_value=s.top().first;
					int current_count=s.top().second;
					s.pop();
					s.push(pair<int,int>(current_value,current_count+prev_count));
				}
			}
		}
	}
	while(!s.empty()){
		answer=max(answer,s.top().first*s.top().second);
		int prev_value=s.top().first;
		int prev_count=s.top().second;
		s.pop();
		if(!s.empty()){
			int current_value=s.top().first;
			int current_count=s.top().second;
			s.pop();
			s.push(pair<int,int>(current_value,current_count+prev_count));
		}
	}
	printf("%d",answer);
}
