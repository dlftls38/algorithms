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
	int a,b;
	scanf("%d%d",&a,&b);
	int aa[10]={0};
	int bb[10]={0};
	int i,j;
	i=0;
	while(a>0){
		aa[i++]=a%10;
		a/=10;
	}
	i=0;
	while(b>0){
		bb[i++]=b%10;
		b/=10;
	}
	for(i=0;i<10;i++){
		aa[i]+=bb[i];
	}
	int start=0;
	for(i=9;i>=0;i--){
		if(aa[i]>0){
			start=1;
		}
		if(start==1){
			printf("%d",aa[i]);
		}
	}
}
