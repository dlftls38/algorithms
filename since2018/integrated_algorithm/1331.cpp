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
int main(){
	int check[6][6]={0};
	char route[36][3]={0};
	int i,j;
	for(i=0;i<36;i++){
		scanf("%s",route[i]);
	}
	check[route[0][0]-'A'][route[0][1]-49]=1;
	int ans=0;
	for(i=1;i<36;i++){
		if(check[route[i][0]-'A'][route[i][1]-49]==0 && ( abs(route[i][0]-route[i-1][0])==2 && abs(route[i][1]-route[i-1][1])==1 || abs(route[i][0]-route[i-1][0])==1 && abs(route[i][1]-route[i-1][1])==2 ) ){
			check[route[i][0]-'A'][route[i][1]-49]=1;
		}
		else{
			ans=1;
		}
	}
	if(abs(route[0][0]-route[35][0])==2 && abs(route[0][1]-route[35][1])==1 || abs(route[0][0]-route[35][0])==1 && abs(route[0][1]-route[35][1])==2){
		
	}
	else{
		ans=1;
	}
	if(ans==0){
		printf("Valid");
	}
	else{
		printf("Invalid");
	}
}
