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
	char a[10]={0};
	char b[10]={0};
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int aa[10]={0};
	int bb[10]={0};
	int aaa[10]={0};
	int bbb[10]={0};
	int i,j,k;
	for(i=lena-1,k=0;i>=0;i--,k++){
		aa[k]=a[i]-48;
		if(aa[k]==6){
			aa[k]=5;
		}
		aaa[k]=a[i]-48;
		if(aaa[k]==5){
			aaa[k]=6;
		}
	}
	for(i=lenb-1,k=0;i>=0;i--,k++){
		bb[k]=b[i]-48;
		if(bb[k]==6){
			bb[k]=5;
		}
		bbb[k]=b[i]-48;
		if(bbb[k]==5){
			bbb[k]=6;
		}
	}
	int cc[10]={0};
	int ccc[10]={0};
	int lenc=max(lena,lenb);
	for(i=0;i<max(lena,lenb);i++){
		cc[i]+=aa[i]+bb[i];
		if(cc[i]>=10){
			cc[i]-=10;
			cc[i+1]++;
			if(i==max(lena,lenb)-1){
				lenc++;
			}
		}
	}
	for(i=lenc-1;i>=0;i--){
		printf("%d",cc[i]);
	}
	printf(" ");
	lenc=max(lena,lenb);
	for(i=0;i<max(lena,lenb);i++){
		ccc[i]+=aaa[i]+bbb[i];
		if(ccc[i]>=10){
			ccc[i]-=10;
			ccc[i+1]++;
			if(i==max(lena,lenb)-1){
				lenc++;
			}
		}
	}
	for(i=lenc-1;i>=0;i--){
		printf("%d",ccc[i]);
	}
}
