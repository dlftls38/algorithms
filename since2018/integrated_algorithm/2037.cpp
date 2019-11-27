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
	int p,w;
	scanf("%d%d",&p,&w);
	cin.ignore();
	string s;
	getline(cin,s);
	int i,j;
	int len=s.length();
	int classs[100]={0};
	classs['A']=1;
	classs['B']=1;
	classs['C']=1;
	classs['D']=2;
	classs['E']=2;
	classs['F']=2;
	classs['G']=3;
	classs['H']=3;
	classs['I']=3;
	classs['J']=4;
	classs['K']=4;
	classs['L']=4;
	classs['M']=5;
	classs['N']=5;
	classs['O']=5;
	classs['P']=6;
	classs['Q']=6;
	classs['R']=6;
	classs['S']=6;
	classs['T']=7;
	classs['U']=7;
	classs['V']=7;
	classs['W']=8;
	classs['X']=8;
	classs['Y']=8;
	classs['Z']=8;
	int cost[100]={0};
	cost['A']=1;
	cost['B']=2;
	cost['C']=3;
	cost['D']=1;
	cost['E']=2;
	cost['F']=3;
	cost['G']=1;
	cost['H']=2;
	cost['I']=3;
	cost['J']=1;
	cost['K']=2;
	cost['L']=3;
	cost['M']=1;
	cost['N']=2;
	cost['O']=3;
	cost['P']=1;
	cost['Q']=2;
	cost['R']=3;
	cost['S']=4;
	cost['T']=1;
	cost['U']=2;
	cost['V']=3;
	cost['W']=1;
	cost['X']=2;
	cost['Y']=3;
	cost['Z']=4;
	cost[' ']=1;
	int ans=0;
	for(i=0;i<len;i++){
		ans+=p*cost[s[i]];
		if(i && classs[s[i-1]]==classs[s[i]] && classs[s[i]]){
			ans+=w;
		}
	}
	printf("%d",ans);
}
