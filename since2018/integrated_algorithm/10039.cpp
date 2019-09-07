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
	int ans=0;
	for(int i=0;i<5;i++){
		int x;
		scanf("%d",&x);
		if(x<40)
			x=40;
		ans+=x;
	}
	printf("%d",ans/5);
}
