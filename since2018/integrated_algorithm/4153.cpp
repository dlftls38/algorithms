#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int i,j;
	while(1){
		int a[3];
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		if(a[0]+a[1]+a[2]==0){
			break;
		}
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
}
