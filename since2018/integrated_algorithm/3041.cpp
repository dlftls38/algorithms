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
	char a[4][5];
	int i,j;
	pair<int,int>cost[100];
	cost['A'].first=0;
	cost['A'].second=0;
	cost['B'].first=0;
	cost['B'].second=1;
	cost['C'].first=0;
	cost['C'].second=2;
	cost['D'].first=0;
	cost['D'].second=3;
	cost['E'].first=1;
	cost['E'].second=0;
	cost['F'].first=1;
	cost['F'].second=1;
	cost['G'].first=1;
	cost['G'].second=2;
	cost['H'].first=1;
	cost['H'].second=3;
	cost['I'].first=2;
	cost['I'].second=0;
	cost['J'].first=2;
	cost['J'].second=1;
	cost['K'].first=2;
	cost['K'].second=2;
	cost['L'].first=2;
	cost['L'].second=3;
	cost['M'].first=3;
	cost['M'].second=0;
	cost['N'].first=3;
	cost['N'].second=1;
	cost['O'].first=3;
	cost['O'].second=2;
	int ans=0;
	for(i=0;i<4;i++){
		scanf("%s",a[i]);
		for(j=0;j<4;j++){
			if(a[i][j]!='.'){
				ans+=abs(cost[a[i][j]].first-i)+abs(cost[a[i][j]].second-j);
			}
		}
	}
	printf("%d",ans);
}
