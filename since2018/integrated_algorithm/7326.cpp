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
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		if(x==y){
			if(x%2==0){
				printf("%d\n",x*2);
			}
			else{
				printf("%d\n",(x-1)*2+1);
			}
		}
		else if(x-2==y){
			printf("%d\n",2*(y/2)+x);
		}
		else{
			printf("No Number\n");
		}
	}
}
