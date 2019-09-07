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
	long long s;
	scanf("%d",&s);
	int i,j;
	long long n=1;
	while(1){
		if(n*(n+1)/2==s) {
			printf("%d",n);
			return 0;	
		}
		if(n*(n+1)/2 < s && (n+1)*(n+2)/2 > s){
			printf("%d",n);
			return 0;
		}
		else{
			n++;
		}
	}
}
