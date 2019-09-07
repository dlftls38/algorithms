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
	int a[10]={0};
	int b[10]={0};
	int i,j;
	for(i=1;i<=9;i++){
		scanf("%d",&a[i]);
		if(i!=0){
			a[i]+=a[i-1];
		}
	}
	for(i=1;i<=9;i++){
		scanf("%d",&b[i]);
		if(i!=0){
			b[i]+=b[i-1];
		}
	}
	for(i=1;i<=9;i++){
		if(a[i]>b[i-1]){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}
