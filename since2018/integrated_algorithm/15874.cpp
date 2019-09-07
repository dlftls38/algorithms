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
	int k,lens;
	char trash;
	scanf("%d%d%c",&k,&lens,&trash);
	int i,j;
	string s;
	getline(cin,s);
	for(i=0;i<lens;i++){
		if(s[i]>='a'){
			int temp=s[i]+k%26;
			if(temp>'z')temp-=26;
			printf("%c",temp);
		}
		else if(s[i]>='A'){
			int temp=s[i]+k%26;
			if(temp>'Z')temp-=26;
			printf("%c",temp);
		}
		else{
			printf("%c",s[i]);
		}
	}
}
