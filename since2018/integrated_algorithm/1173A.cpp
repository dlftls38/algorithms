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
using namespace std;
int main(){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y){
		if(z>=x-y){
			printf("?");
		}
		else{
			printf("+");
		}
	}
	else if(y>x){
		if(z>=y-x){
			printf("?");
		}
		else{
			printf("-");
		}
	}
	else{
		if(z>0){
			printf("?");
		}
		else{
			printf("0");
		}
	}
}
