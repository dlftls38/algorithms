#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	char a[1001]={0};
	char b[1001]={0};
	scanf("%s%s",a,b);
	int aa[10]={0};
	int bb[10]={0};
	int aaa[10]={0};
	int bbb[10]={0};
	for(i=0;i<n;i++){
		aa[a[i]-48]++;
		bb[b[i]-48]++;
		aaa[a[i]-48]++;
		bbb[b[i]-48]++;
	}
	int ans1=0;
	for(i=9;i>=0;i--){
		for(j=i;j>=0;j--){
			int k=min(aaa[j],bbb[i]);
			aaa[j]-=k;
			bbb[i]-=k;
		}
	}
	for(i=0;i<=9;i++){
		ans1+=bbb[i];
	}
	printf("%d\n",ans1);
	int ans2=0;
	for(i=9;i>=1;i--){
		for(j=i-1;j>=0;j--){
			int k=min(aa[j],bb[i]);
			aa[j]-=k;
			bb[i]-=k;
		}
	}
	for(i=0;i<=9;i++){
		ans2+=aa[i];
	}
	printf("%d\n",n-ans2);
}
