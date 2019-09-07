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
	int h,m;
	scanf("%d%d",&h,&m);
	m-=45;
	if(m<0){
		m+=60;
		h--;
	}
	if(h<0){
		h+=24;
	}
	printf("%d %d\n",h,m);
}
