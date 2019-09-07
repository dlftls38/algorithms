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
#include <math.h>
using namespace std;
int main(){
	long long k;
	scanf("%lld",&k);
	int a[20]={0};
	int tail=0;
	while(k>0){
		a[tail++]=k%10;
		k/=10;
	}
	int ans=1;
	int d=a[0]-a[1];
	for(int i=0;i<tail-1;i++){
		if(a[i]-a[i+1]!=d){
			ans=0;
		}
	}
	if(tail==1 || ans==1){
		printf("?(?????)?..¡Æ¢½ ²î¿ä¹Ì!!");
	}
	else{
		printf("ÈïÄ©»×!! <(£þ ? £þ)>");
	}
}
