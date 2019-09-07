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
	int i,j;
	int ans=0;
	int y,x;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			int temp;
			scanf("%d",&temp);
			if(temp>ans){
				ans=temp;
				y=i+1;
				x=j+1;
			}
		}
	}
	printf("%d\n%d %d",ans,y,x);
}
