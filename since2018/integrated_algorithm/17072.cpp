#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
//#include <stack>
//#include <queue>
//#include <map>
//#include <set>
//#include <limits.h>
//#include <functional>
//#include <math.h>
//#include <fstream>
//#define INF 987654321
//#define MAX_VALUE 1000000000
//#define MOD 1000000009
//#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			int r,g,b;
			scanf("%d%d%d",&r,&g,&b);
			int ii=2126*r+7152*g+722*b;
			if(ii<510000){
				printf("#");
			}
			else if(ii<1020000){
				printf("o");
			}
			else if(ii<1530000){
				printf("+");
			}
			else if(ii<2040000){
				printf("-");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
}
