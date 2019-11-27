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
	cin>>s;
	int n;
	scanf("%d",&n);
	int i,j;
	string a[100];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	queue<string>q;
	q.push(s);
	while(!q.empty()){
		string cur=q.front();
		q.pop();
		if(cur.length()==0){
			printf("1");
			return 0;
		}
		for(i=0;i<n;i++){
			if(a[i].compare(cur.substr(0,a[i].length()))==0){
				q.push(cur.substr(a[i].length()));
			}
		}
	}
	printf("0");
}
