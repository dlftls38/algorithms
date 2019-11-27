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
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		char a[1000]={0};
		strcpy(a,s.c_str());
		char *str = strtok(a," OH=");
		double temp = atof(str);
		double ans = -log10(temp);
		if(a[0]=='O'){
			printf("%.2f\n",14-ans);
		}
		else{
			printf("%.2f\n",ans);	
		}
	}
}
