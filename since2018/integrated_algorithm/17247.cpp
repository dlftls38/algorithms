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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int sx=-1,sy=-1,ex=-1,ey=-1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			int temp;
			scanf("%d",&temp);
			if(temp==1){
				if(sx==-1){
					sx=i;
					sy=j;
				}
				else{
					ex=i;
					ey=j;
				}
			}
		}
	}
	printf("%d",abs(sx-ex)+abs(sy-ey));
}