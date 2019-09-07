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
int a[1000];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int p;
		scanf("%d",&p);
		int i,j;
		int ans_cost=0;
		char ans_name[21];
		for(i=0;i<p;i++){
			int temp_cost;
			char temp_name[21];
			scanf("%d%s",&temp_cost,temp_name);
			if(ans_cost<temp_cost){
				memcpy(ans_name,temp_name,sizeof(temp_name));
				ans_cost=temp_cost;
			}
		}
		printf("%s\n",ans_name);
	}
}
