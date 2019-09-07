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
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("1");
		return 0;
	}
	int s=2,e=7,c=2,d=6,dd=12;
	while(1){
		if(n>= s && n<=e){
			printf("%d",c);
			return 0;
		}
		s+=d;
		e+=dd;
		d+=6;
		dd+=6;
		c++;
	}
}
