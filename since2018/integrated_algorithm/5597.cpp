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
	int i,j;
	int check[31]={0};
	for(i=0;i<28;i++){
		int temp;
		scanf("%d",&temp);
		check[temp]=1;
	}
	for(i=1;i<=30;i++){
		if(check[i]==0){
			printf("%d\n",i);
		}
	}
}
