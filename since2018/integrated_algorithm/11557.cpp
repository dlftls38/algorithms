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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n;
		scanf("%d",&n);
		int i,j;
		int ans_cost=0;
		char ans_name[21];
		for(i=0;i<n;i++){
			int temp_cost;
			char temp_name[21];
			scanf("%s%d",temp_name,&temp_cost);
			if(temp_cost>ans_cost){
				ans_cost=temp_cost;
				memcpy(ans_name,temp_name,sizeof(temp_name));
			}
		}
		printf("%s\n",ans_name);
	}
}
