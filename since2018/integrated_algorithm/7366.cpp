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
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		int cnt=0;
		for(j=0;j<m;j++){
			char temp[11];
			scanf("%s",temp);
			if(strcmp(temp,"sheep")==0){
				cnt++;
			}
		}
		printf("Case %d: This list contains %d sheep.\n\n",i+1,cnt);
	}
}
