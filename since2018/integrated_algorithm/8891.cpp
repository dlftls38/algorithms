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
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int i,j;
		int cur=1;
		int a_y;
		int a_x;
		int b_y;
		int b_x;
		for(i=1;;i++){
			if(cur+i-1>=a){
				a_x=1+(a-cur);
				a_y=i-(a-cur);
				break;
			}
			cur+=i;
		}
		cur=1;
		for(i=1;;i++){
			if(cur+i-1>=b){
				b_x=1+(b-cur);
				b_y=i-(b-cur);
				break;
			}
			cur+=i;
		}
		int c_x=a_x+b_x;
		int c_y=a_y+b_y;
		int check=0;
		cur=1;
		for(i=1;;i++){
			for(j=0;j<i;j++){
				if(c_x==1+j && c_y==i-j){
					printf("%d\n",cur+j);
					check=1;
					break;
				}
			}
			if(check)break;
			cur+=i;
		}
	}
}
