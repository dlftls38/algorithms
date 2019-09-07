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
int recur(int a){
	int temp=0;
	while(1){
		temp+=a%10;
		a/=10;
		if(a==0){
			if(temp/10==0){
				return temp;
			}
			else{
				a=temp;
				temp=0;
			}
		}
	}
}
int main(){
	int i,j;
	int n;
	for(;;){
		scanf("%d",&n);
		if(n==0){
			return 0;
		}
		else{
			printf("%d\n",recur(n));
		}
	}
}
