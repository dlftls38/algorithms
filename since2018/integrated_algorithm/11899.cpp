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
	string str;
	cin>>str;
	int len=str.length();
	stack<char>s;
	int ans=0;
	for(auto it : str){
		if(it==')'){
			if(s.empty()){
				ans++;
			}
			else{
				s.pop();
			}
		}
		else{
			s.push('(');
		}
	}
	printf("%d",ans+s.size());
}
