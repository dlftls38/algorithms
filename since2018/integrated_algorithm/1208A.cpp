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
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int i,j;
		int q[30]={0};
		q[0]=a;
		q[1]=b;
		for(i=2;i<30;i++){
			q[i]=q[i-1]^q[i-2];
		}
		printf("%d\n",q[c%3]);
	}
}
