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
struct nation{
	int country;
	int gold;
	int silver;
	int bronze;
};
bool cmp(nation a,nation b){
	if(a.gold>b.gold){
		return true;
	}
	else if(a.gold==b.gold){
		if(a.silver>b.silver){
			return true;
		}
		else if(a.silver==b.silver){
			if(a.bronze>b.bronze){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	nation group[1000];
	for(i=0;i<n;i++){
		int country,gold,silver,bronze;
		scanf("%d%d%d%d",&country,&gold,&silver,&bronze);
		group[i].bronze=bronze;
		group[i].silver=silver;
		group[i].gold=gold;
		group[i].country=country;
	}
	sort(group,group+n,cmp);
	if(group[0].country==k){
		printf("1");
		return 0;
	}
	int cur=1;
	for(i=1;i<n;i++){
		if(group[i].gold==group[i-1].gold && group[i].silver==group[i-1].silver && group[i].bronze==group[i-1].bronze){
			
		}
		else{
			cur=i+1;
		}
		if(group[i].country==k){
			printf("%d",cur);
			return 0;
		}
	}
}
