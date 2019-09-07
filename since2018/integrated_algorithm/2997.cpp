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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int a[3]={0};
	int i,j;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+3);
	int q=a[1]-a[0];
	int w=a[2]-a[1];
	if(q==w){
		printf("%d",a[2]+q);
	}
	else{
		if(q>w){
			printf("%d",a[0]+w);
		}
		else{
			printf("%d",a[1]+q);
		}
	}
}
