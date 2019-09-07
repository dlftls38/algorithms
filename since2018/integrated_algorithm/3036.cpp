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
using namespace std;
int main(){
	int a[100]={0};
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		int temp=a[0];
		for(j=2;j<=1000;j++){
			while(temp%j==0 && a[i]%j==0){
				temp/=j;
				a[i]/=j;
			}
		}
		printf("%d/%d\n",temp,a[i]);
	}
}
