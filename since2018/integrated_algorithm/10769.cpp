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
	getline(cin,s);
	int smile_cnt=0;
	int smile_pos=0;
	while(s.find(":-)",smile_pos)!=string::npos){
		smile_cnt++;
		smile_pos=s.find(":-)",smile_pos)+3;
	}
	int sad_cnt=0;
	int sad_pos=0;
	while(s.find(":-(",sad_pos)!=string::npos){
		sad_cnt++;
		sad_pos=s.find(":-(",sad_pos)+3;
	}
	if(smile_cnt+sad_cnt==0){
		printf("none");
	}
	else if(smile_cnt==sad_cnt){
		printf("unsure");
	}
	else if(smile_cnt>sad_cnt){
		printf("happy");
	}
	else if(smile_cnt<sad_cnt){
		printf("sad");
	}
}
