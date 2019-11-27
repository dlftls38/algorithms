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
	char ss[101]={0};
	strcpy(ss,s.c_str());
	char *str = strtok(ss," ");
	string ans;
	int cnt=0;
	while(str!=NULL){
		if(cnt==0){
			ans+=str[0]-('a'-'A');
		}
		else{
			if(strcmp(str,"i")!=0 && strcmp(str,"pa")!=0 && strcmp(str,"te")!=0 && strcmp(str,"ni")!=0 && strcmp(str,"niti")!=0 && strcmp(str,"a")!=0 && strcmp(str,"ali")!=0 && strcmp(str,"nego")!=0 && strcmp(str,"no")!=0 && strcmp(str,"ili")!=0){
				ans+=str[0]-('a'-'A');
			}
		}
		str = strtok(NULL," ");
		cnt++;
	}
	printf("%s",ans.c_str());
}
