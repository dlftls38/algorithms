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
	scanf("%d",&n);
	int i,j;
	cin.ignore();
	for(i=0;i<n;i++){
		string s;
		getline(cin,s);
		if(s.substr(0,10).compare("Simon says")==0){
			printf("%s\n",s.substr(10,s.length()-10).c_str());
		}
	}
}
