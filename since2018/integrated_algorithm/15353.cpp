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
	char a[10005]={0};
	char b[10005]={0};
	scanf("%s%s",a,b);
	int aa[10005]={0};
	int bb[10005]={0};
	int lena=strlen(a);
	int lenb=strlen(b);
	int i,j,k;
	for(i=lena-1,k=0;i>=0;i--,k++){
		aa[k]=a[i]-48;
	}
	for(i=lenb-1,k=0;i>=0;i--,k++){
		bb[k]=b[i]-48;
	}
	int c[10005]={0};
	int lenc=max(lena,lenb);
	for(i=0;i<max(lena,lenb);i++){
		c[i]+=aa[i]+bb[i];
		if(c[i]>=10){
			c[i]-=10;
			c[i+1]++;
			if(i==lenc-1){
				lenc++;
			}
		}
	}
	for(i=lenc-1;i>=0;i--){
		printf("%d",c[i]);
	}
}
