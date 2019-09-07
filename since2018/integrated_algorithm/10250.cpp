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
	int t;
	scanf("%d",&t);
	while(t--){
		int h,w,n;
		scanf("%d%d%d",&h,&w,&n);
		int ans_h=n%h;
		int ans_w=n/h+1;
		if(ans_h==0){
			ans_h=h;
			ans_w--;
		}
		if(ans_w<10)
			printf("%d0%d\n",ans_h,ans_w);
		else
			printf("%d%d\n",ans_h,ans_w);
	}
}
