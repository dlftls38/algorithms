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
	char temp[35]={0};
	strcpy(temp,s.c_str());
	char *str=strtok(temp,":");
	int n=0,m;
	while(str!=NULL){
		if(n==0){
			n=atoi(str);
		}
		else{
			m=atoi(str);
		}
		str=strtok(NULL,":");
	}
	printf("%d:%d",n/__gcd(n,m),m/__gcd(n,m));
}
