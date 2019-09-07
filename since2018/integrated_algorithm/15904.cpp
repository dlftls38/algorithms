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
	getline(cin,s);
	int cur=0;
	for(auto it : s){
		if(cur==0){
			if(it=='U'){
				cur++;
			}
		}
		else if(cur==1){
			if(it=='C'){
				cur++;
			}
		}
		else if(cur==2){
			if(it=='P'){
				cur++;
			}
		}
		else{
			if(it=='C'){
				printf("I love UCPC");
				return 0;
			}
		}
	}
	printf("I hate UCPC");
}
