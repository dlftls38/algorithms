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
	string s,t;
	cin>>s>>t;
	if(s.length()>t.length()){
		swap(s,t);
	}
	string new_s;
	string new_t;
	int i;
	for(i=0;i<t.length();i++){
		new_s+=s;
	}
	for(i=0;i<s.length();i++){
		new_t+=t;
	}
	if(new_s.compare(new_t)==0){
		printf("1");
	}
	else{
		printf("0");
	}
}
