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
	int strength[100]={0};
	string cards[5];
	for(int i=0;i<5;i++){
		cin>>cards[i];
		strength[cards[i][0]]++;
	}
	string rank="A23456789TJQK";
	int ans=0;
	for(auto it : rank){
		ans=max(ans,strength[it]);
	}
	printf("%d",ans);
}
