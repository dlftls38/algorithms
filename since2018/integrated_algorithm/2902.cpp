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
	char a[101]={0};
	scanf("%s",a);
	int i,j;
	char *ptr=strtok(a,"-");
	while(ptr!=NULL){
		printf("%c",ptr[0]);
		ptr=strtok(NULL,"-");
	}
}
