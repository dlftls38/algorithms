#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int  x1,y1,r1,x2,y2,r2;
		scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
		double real = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		if(x1==x2 && y1==y2){
			if(r1==r2){
				printf("-1\n");
			}
			else{
				printf("0\n");
			}
		}
		else if(real<r1+r2 && real>abs(r1-r2)){
			printf("2\n");
		}
		else if(real==r1+r2 || real==abs(r1-r2)){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
}
