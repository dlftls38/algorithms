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
using namespace std;
typedef pair<int,int> pii;
int main(){
	string a;
	cin>>a;
	string b;
	int i,j;
	int pos=0;
	while(1){
		string c=a+b;
		int len=c.length();
		int check=0;
		for(i=0;i<len/2;i++){
			if(c[i]!=c[len-i-1]){
				check=1;
			}
		}
		if(check==0){
			printf("%d",len);
			break;
		}
		b=a[pos++]+b;
	}
}
