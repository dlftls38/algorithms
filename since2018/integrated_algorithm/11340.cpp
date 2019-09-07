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
	int i,j;
	for(i=0;i<n;i++){
		double a,b,c;
		scanf("%lf%lf%lf",&a,&b,&c);
		int check=0;
		for(j=0;j<=100;j++){
			if(a*0.15+b*0.20+c*0.25+j*0.4>=90){
				printf("%d\n",j);
				check=1;
				break;
			}
		}
		if(check==0){
			printf("impossible\n");
		}
	}
}
