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
	int three=0;
	int five=0;
	five+=n/5;
	n%=5;
	three+=n/3;
	n%=3;
	while(n>0){
		if(five==0){
			break;
		}
		five--;
		n+=5;
		three+=n/3;
		n%=3;
	}
	if(n>0){
		printf("-1");
	}
	else{
		printf("%d",five+three);
	}
}
