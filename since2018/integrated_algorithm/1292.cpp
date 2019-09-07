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
int s[1001];
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int i,j;
	int tail=1;
	for(i=1;tail<1001;i++){
		for(j=0;j<i && tail<1001;j++){
			s[tail]=i+s[tail-1];
			tail++;
		}
	}
	printf("%d",s[b]-s[a-1]);
}
