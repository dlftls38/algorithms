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
	int n,l;
	scanf("%d%d",&n,&l);
	int x=-1;
	int end;
	for(int i=l;i<=100;i++){
		int t=(i-1)*i/2;
		if((n-t)%i==0 && (n-t)/i>=0){
			x = (n-t)/i;
			end=i;
			break;
		}
	}
	if(x==-1){
		printf("-1");
	}
	else{
		for(int i=0;i<end;i++){
			printf("%d ",x+i);
		}
	}
}
