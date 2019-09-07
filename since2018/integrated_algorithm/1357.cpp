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
int rev(int a){
	int i;
	int temp=0;
	while(a>0){
		temp*=10;
		temp+=a%10;
		a/=10;
	}
	return temp;
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int i,j;
	printf("%d",rev(rev(x)+rev(y)));
}
