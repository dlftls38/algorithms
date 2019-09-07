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
	int n,m;
	scanf("%d%d",&n,&m);
	if(n==1){
		printf("1");
	}
	else if(n==2){
		printf("%d",min((m-1)/2+1,4));
	}
	else if(n>2){
		if(m>=7){
			printf("%d",m-2);
		}
		else{
			printf("%d",min(m,4));
		} 
	}
}
