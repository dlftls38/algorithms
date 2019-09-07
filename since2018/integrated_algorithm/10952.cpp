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
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		if(a==0 && b==0){
			break;
		}
		printf("%d\n",a+b);
	}
}
