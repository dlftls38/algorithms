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
	int a,b,g;
	scanf("%d%d%d",&a,&b,&g);
	int i,j;
	string team_a[20];
	string team_b[20];
	int score_a=0;
	int score_b=0;
	for(i=0;i<a;i++){
		cin>>team_a[i];
	}
	for(i=0;i<b;i++){
		cin>>team_b[i];
	}
	for(i=0;i<g;i++){
		string temp;
		cin>>temp;
		if(find(team_a,team_a+a,temp)!=team_a+a){
			score_a++;
		}
		else{
			score_b++;
		}
	}
	if(score_a==score_b){
		printf("TIE");
	}
	else if(score_a>score_b){
		printf("A");
	}
	else{
		printf("B");
	}
}
