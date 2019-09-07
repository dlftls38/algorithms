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
	while(1){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a+b==0){
			break;
		}
		if(b%a==0){
			printf("factor\n");
		}
		else if(a%b==0){
			printf("multiple\n");
		}
		else{
			printf("neither\n");
		}
	}
}
