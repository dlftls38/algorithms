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
	scanf("%d",&n);
	string s;
	cin>>s;
	int cnt_num=0;
	int cnt_alphabat=0;
	for(auto it : s){
		if(it=='2'){
			cnt_num++;
		}
		else{
			cnt_alphabat++;
		}
	}
	if(cnt_num>cnt_alphabat){
		printf("2");
	}
	else if(cnt_num<cnt_alphabat){
		printf("e");
	}
	else{
		printf("yee");
	}
}
