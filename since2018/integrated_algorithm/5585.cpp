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
	int i;
	int ans=0;
	n=1000-n;
	if(n/500){
		ans+=n/500;
		n-=n/500*500;
	}
	if(n/100){
		ans+=n/100;
		n-=n/100*100;
	}
	if(n/50){
		ans+=n/50;
		n-=n/50*50;
	}
	if(n/10){
		ans+=n/10;
		n-=n/10*10;
	}
	if(n/5){
		ans+=n/5;
		n-=n/5*5;
	}
	if(n/1){
		ans+=n/1;
		n-=n/1*1;
	}
	printf("%d",ans);
}
