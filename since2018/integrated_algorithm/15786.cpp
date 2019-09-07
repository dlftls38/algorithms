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
	int n,m;
	scanf("%d%d",&n,&m);
	string s;
	cin>>s;
	int i,j;
	for(i=0;i<m;i++){
		string temp;
		cin>>temp;
		int len=temp.length();
		int cnt=0;
		for(j=0;j<len;j++){
			if(s[cnt]==temp[j]){
				cnt++;
			}
		}
		if(cnt==n){
			printf("true\n");
		}
		else{
			printf("false\n");
		}
	}
}
