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
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==0){
		printf("0");
		return 0;
	}
	int i,j;
	string ans;
	while(m>0){
		string temp;
		if(m%n>=10){
			temp='A'+m%n-10;
		}
		else{
			temp='0'+m%n;
		}
		ans =  temp + ans;
		m/=n;
	}
	printf("%s",ans.c_str());
}
