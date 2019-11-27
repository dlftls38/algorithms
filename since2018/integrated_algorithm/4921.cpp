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
	int tc;
	for(tc=1;;tc++){
		string s;
		cin>>s;
		int len=s.length();
		if(len==1 && s[0]=='0'){
			break;
		}
		int i,j;
		bool isvalid=true;
		if(s[0]!='1' || s[len-1]!='2'){
			isvalid=false;
		}
		for(i=0;i<len-1;i++){
			if(s[i]=='2' || s[i+1]=='1'){
				isvalid=false;
			}
			if(s[i]=='1'){
				if(s[i+1]!='4' && s[i+1]!='5'){
					isvalid=false;
				}
			}
			else if(s[i]=='3'){
				if(s[i+1]!='4' && s[i+1]!='5'){
					isvalid=false;
				}
			}
			else if(s[i]=='4'){
				if(s[i+1]!='2' && s[i+1]!='3'){
					isvalid=false;
				}
			}
			else if(s[i]=='5'){
				if(s[i+1]!='8'){
					isvalid=false;
				}
			}
			else if(s[i]=='6'){
				if(s[i+1]!='2' && s[i+1]!='3'){
					isvalid=false;
				}
			}
			else if(s[i]=='7'){
				if(s[i+1]!='8'){
					isvalid=false;
				}
			}
			else if(s[i]=='8'){
				if(s[i+1]!='6' && s[i+1]!='7'){
					isvalid=false;
				}
			}
		}
		if(isvalid){
			printf("%d. VALID\n",tc);
		}
		else{
			printf("%d. NOT\n",tc);
		}
	}
}
