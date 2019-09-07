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
	int len=s.length();
	int i;
	string a[26]={"@","8","(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};
	for(i=0;i<len;i++){
		if(s[i]>='A' && s[i]<='Z'){
			printf("%s",a[s[i]-'A'].c_str());
		}
		else if(s[i]>='a' && s[i]<='z'){
			printf("%s",a[s[i]-'a'].c_str());
		}
		else{
			printf("%c",s[i]);
		}
	}
}
