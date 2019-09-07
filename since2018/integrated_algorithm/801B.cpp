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
	char x[101]={0};
	char y[101]={0};
	scanf("%s%s",x,y);
	int i,j;
	int len=strlen(x);
	char z[101]={0};
	for(i=0;i<len;i++){
		if(y[i]>x[i]){
			printf("-1");
			return 0;
		}
		else{
			z[i]=y[i];
		}
	}
	printf("%s",z);
}
