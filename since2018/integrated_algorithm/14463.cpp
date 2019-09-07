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
int check[50001];
int circle[100000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&circle[i]);
	}
	stack<int>s;
	int ans=0;
	for(i=0;i<n;i++){
		s.push(circle[i]);
		if(check[circle[i]]>0){
			s.pop();
			ans+=s.size()-check[circle[i]];
		}
		else{
			check[circle[i]]=s.size();
		}
	}
	printf("%d",ans/2);
}
