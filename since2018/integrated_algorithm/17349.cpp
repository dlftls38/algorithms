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
using namespace std;
typedef pair<int,int> pii;
pair <int,int> state[10];
pair <int,int> input[9];
int ans_candidate;
int ans_count;
void solve(){
	int i,j;
	int candidate=0;
	int zero=0;
	int candidate_winner;
	int zero_winner;
	for(i=1;i<=9;i++){
		if(state[i].first>0){
			if(state[i].second>0){
				return;
			}
			else{
				candidate++;
				candidate_winner=i;
				if(candidate>1)return;
			}
		}
		else{
			if(state[i].second==0){
				zero++;
				zero_winner=i;
			}
		}
	}
	if(candidate==1){
		ans_candidate=candidate_winner;
		ans_count++;
	}
	else if(candidate==0 && zero==1){
		ans_candidate=zero_winner;
		ans_count++;
	}
	else if(candidate==0 && zero>0){
		ans_count+=zero;
	}
}
int main(){
	int i,j;
	for(i=0;i<9;i++){
		int t1,t2;
		scanf("%d%d",&t1,&t2);
		input[i].first=t1;
		input[i].second=t2;
		if(t1==0){
			state[t2].second++;
		}
		else{
			state[t2].first++;
		}
	}
	for(i=0;i<9;i++){
		if(input[i].first==0){
			state[input[i].second].second--;
			state[input[i].second].first++;
			solve();
			state[input[i].second].second++;
			state[input[i].second].first--;
		}
		else{
			state[input[i].second].second++;
			state[input[i].second].first--;
			solve();
			state[input[i].second].second--;
			state[input[i].second].first++;
		}
	}
	if(ans_count==1){
		printf("%d",ans_candidate);
	}
	else{
		printf("-1");
	}
}
