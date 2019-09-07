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
	string a;
	string b;
	cin>>a>>b;
	int len=a.length();
	int i;
	for(i=0;i<len;i++){
		printf("%d",(a[i]-48)&(b[i]-48));
	}
	printf("\n");
	for(i=0;i<len;i++){
		printf("%d",(a[i]-48)|(b[i]-48));
	}
	printf("\n");
	for(i=0;i<len;i++){
		printf("%d",(a[i]-48)^(b[i]-48));
	}
	printf("\n");
	for(i=0;i<len;i++){
		printf("%d",(a[i]-48+1)%2);
	}
	printf("\n");
	for(i=0;i<len;i++){
		printf("%d",(b[i]-48+1)%2);
	}
	printf("\n");
}
