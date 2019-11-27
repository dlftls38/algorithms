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
	for(i=1;i<=n;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a+b>c && a+c>b && b+c>a){
			if(a==b && b==c){
				printf("Case #%d: equilateral\n",i);
			}
			else if(a==b || b==c || a==c){
				printf("Case #%d: isosceles\n",i);
			}
			else{
				printf("Case #%d: scalene\n",i);	
			}
		}
		else{
			printf("Case #%d: invalid!\n",i);
		}
	}
}
