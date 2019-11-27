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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int l,w,h,v;
		scanf("%d%d%d%d",&l,&w,&h,&v);
		if(l+w+h+v==0)break;
		if(l==0){
			printf("%d %d %d %d\n",v/w/h,w,h,v);
		}
		else if(w==0){
			printf("%d %d %d %d\n",l,v/l/h,h,v);
		}
		else if(h==0){
			printf("%d %d %d %d\n",l,w,v/l/w,v);
		}
		else if(v==0){
			printf("%d %d %d %d\n",l,w,h,l*w*h);
		}
	}
}
