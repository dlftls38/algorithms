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
int a[5];
int main(){
	int i,j;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;;i++){
		int cnt=0;
		for(j=0;j<5;j++){
			if(i%a[j]==0){
				cnt++;
			}
		}
		if(cnt>=3){
			printf("%d",i);
			return 0;
		}
	}
}
