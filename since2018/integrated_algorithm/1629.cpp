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
int a,b,c;
int recur(int cnt){
	if(cnt==1){
		return a%c;
	}
	int temp=recur(cnt/2);
	temp=1LL*temp*temp%c;
	if(cnt%2==1){
		temp=1LL*a*temp%c;
	}
	return temp;
}
int main(){
	scanf("%d%d%d",&a,&b,&c);
	int i,j;
	printf("%d",recur(b));
}
