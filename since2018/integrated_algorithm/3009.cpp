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
	int i,j;
	int a[3]={0};
	int b[3]={0};
	for(i=0;i<3;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		a[i]=x;
		b[i]=y;
	}
	int q=-10000,w=-10000;
	for(i=0;i<3;i++){
		int count1=0;
		int count2=0;
		for(j=0;j<3;j++){
			if(a[j]==a[i])count1++;
			if(b[j]==b[i])count2++;
		}
		if(count1%2==1){
			q=a[i];
		}
		if(count2%2==1){
			w=b[i];
		}
	}
	printf("%d %d",q,w);
}
