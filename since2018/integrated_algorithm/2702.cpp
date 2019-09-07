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
int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}
int lcm(int a, int b){
    return a * b / gcd(a,b);
}
int main(){
	int t;
	scanf("%d",&t);
	int i,j;
	for(i=0;i<t;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d %d\n",lcm(a,b),gcd(a,b));
	}
}
