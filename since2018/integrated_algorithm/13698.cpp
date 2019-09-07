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
	string s;
	cin>>s;
	int ball_pos[5]={0};
	ball_pos[1]=1;
	ball_pos[4]=2;
	for(auto it : s){
		if(it=='A'){
			swap(ball_pos[1],ball_pos[2]);
		}
		else if(it=='B'){
			swap(ball_pos[1],ball_pos[3]);
		}
		else if(it=='C'){
			swap(ball_pos[1],ball_pos[4]);
		}
		else if(it=='D'){
			swap(ball_pos[2],ball_pos[3]);
		}
		else if(it=='E'){
			swap(ball_pos[2],ball_pos[4]);
		}
		else if(it=='F'){
			swap(ball_pos[3],ball_pos[4]);
		}
	}
	int i=0;
	for(i=1;i<=4;i++){
		if(ball_pos[i]==1){
			printf("%d\n",i);
		}
	}
	for(i=1;i<=4;i++){
		if(ball_pos[i]==2){
			printf("%d\n",i);
		}
	}
}
