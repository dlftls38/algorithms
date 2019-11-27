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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(n==1 && k>0){
		cout<<'0';
		return 0;
	}
	if(k==0){
		cout<<s;
	}
	else{
		if(s[0]!='1'){
			s[0]='1';
			k--;
		}
		int i;
		for(i=1;i<n && k>0;i++){
			if(s[i]!='0'){
				s[i]='0';
				k--;
			}
		}
		cout<<s;
	}
}
