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
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int i,j,k;
	int ans=INT_MAX;
	int a,b,c;
	for(i=0;i<34;i++){
		for(j=0;j<167;j++){
			for(k=0;k<1001;k++){
				if(i*300+j*60+k*10==t && ans>i+j+k){
					ans=i+j+k;
					a=i;
					b=j;
					c=k;
				}
			}
		}
	}
	if(ans==INT_MAX){
		printf("-1");
	}
	else{
		printf("%d %d %d",a,b,c);
	}
}
