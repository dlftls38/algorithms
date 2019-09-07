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
	int a[1100]={0};
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	stack<int>s;
	int cur=1;
	i=0;
	while(1){
		if(a[i]==cur){
			cur++;
			i++;
			continue;
		}
		else if(!s.empty() && s.top()==cur){
			cur++;
			s.pop();
			continue;
		}
		if(i==n){
			break;
		}
		else{
			s.push(a[i]);
			i++;
		}
	}
	if(s.empty()){
		printf("Nice");
	}
	else{
		printf("Sad");
	}
}
