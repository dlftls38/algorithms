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
int a[1000000];
int main(){
	int i=0;
	while(scanf("%d",&a[i++])==1){
		
	}
	int j;
	int check=1;
	for(j=1;j<i-1;j++){
		if(a[j-1]>a[j]){
			check=0;
		}
	}
	if(check==0){
		printf("Bad");
	}
	else{
		printf("Good");
	}
}
