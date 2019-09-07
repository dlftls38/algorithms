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
	int n;
	scanf("%d",&n);
	int i,j;
	char a[101]={0};
	scanf("%s",a);
	int q=0,w=0;
	for(i=0;i<n;i++){
		if(a[i]=='0')q++;
		else w++;
	}
	if(q==w){
		printf("2\n");
		printf("%c %s",a[0],a+1);
	}
	else{
		printf("1\n");
		printf("%s",a);
	}
}
