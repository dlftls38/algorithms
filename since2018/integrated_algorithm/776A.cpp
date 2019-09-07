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
	char a[1001]={0};
	char b[1001]={0};
	scanf("%s%s",a,b);
	printf("%s %s\n",a,b);
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		char q[1000]={0};
		char w[1000]={0};
		scanf("%s%s",q,w);
		if(strcmp(a,q)==0){
			strcpy(a,w);
		}
		else{
			strcpy(b,w);
		}
		printf("%s %s\n",a,b);
	}
}
