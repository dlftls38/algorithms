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
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		int i,j;
		string s[1000];
		cin.ignore();
		int cur=0;
		for(i=0;i<n;i++){
			getline(cin,s[i]);
			int len=s[i].length();
			for(j=0;j<len;j++){
				if(s[i][j]==' ' && cur<=j){
					cur=j;
					j=1000;
					break;
				}
			}
			for(j=j;j<100;j++){
				if(cur<=j){
					cur=j;
					break;
				}
			}
		}
		printf("%d\n",cur+1);
	}
}
