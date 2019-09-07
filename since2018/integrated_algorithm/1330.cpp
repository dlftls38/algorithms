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
	scanf("%d%d",&a,&b);
	int i,j;
	if(a>b){
		printf(">");
	}
	else if(a==b){
		printf("==");
	}
	else{
		printf("<");
	}
}
