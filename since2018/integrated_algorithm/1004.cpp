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
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		int n;
		scanf("%d",&n);
		int i,j;
		int c1=0,c2=0,c3=0;
		for(i=0;i<n;i++){
			int cx,cy,r;
			scanf("%d%d%d",&cx,&cy,&r);
			if(pow(cx-x1,2)+pow(cy-y1,2)<=pow(r,2)){
				c1++;
			}
			if(pow(cx-x2,2)+pow(cy-y2,2)<=pow(r,2)){
				c2++;
			}
			if(pow(cx-x1,2)+pow(cy-y1,2)<=pow(r,2) && pow(cx-x2,2)+pow(cy-y2,2)<=pow(r,2)){
				c3++;
			}
		}
		printf("%d\n",c1+c2-c3*2);
	}
}
