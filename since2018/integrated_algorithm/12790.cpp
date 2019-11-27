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
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d,e,f,g,h;
		scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
		a+=e;
		b+=f;
		c+=g;
		d+=h;
		if(a<1)a=1;
		if(b<1)b=1;
		if(c<0)c=0;
		printf("%d\n",a+b*5+c*2+d*2);
	}
}
