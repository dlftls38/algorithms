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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		char temp[25];
		scanf("%s",temp);
		int ans=0;
		int val=1;
		for(j=strlen(temp)-1;j>=0;j--){
			if(temp[j]=='1')
				ans+=val;
			val*=2;
		}
		printf("%d\n",ans);
	}
}
