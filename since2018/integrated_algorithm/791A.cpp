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
	int a,b;
	scanf("%d%d",&a,&b);
	int i,j;
	int k=0;
	while(a<=b){
		a*=3;
		b*=2;
		k++;
	}
	printf("%d",k);
}
