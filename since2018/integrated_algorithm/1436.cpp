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
	int n;
	scanf("%d",&n);
	int count=1;
	int ans=666;
	while(1){
		if(count==n){
			break;
		}
		ans++;
		int k=ans;
		for(int i=0;i<7;i++){
			if(k%1000==666){
				count++;
				break;
			}
			k/=10;
		}
	}
	printf("%d",ans);
}
