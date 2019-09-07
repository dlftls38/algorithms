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
	int a[10];
	int i,j;
	for(i=0;i<10;i++){
		a[i]=i;
	}
	int round=1;
	for(i=2;i<=10;i++){
		round*=i;
	}
	int n;
	scanf("%d",&n);
	for(i=0;i<round;i++){
		if(a[0]==0 || a[4]==0){
			next_permutation(a,a+10);
			continue;
		}
		int q=0,w=0;
		q+=a[0];
		q*=10;
		q+=a[1];
		q*=10;
		q+=a[2];
		q*=10;
		q+=a[2];
		q*=10;
		q+=a[3];
		w+=a[4];
		w*=10;
		w+=a[3];
		w*=10;
		w+=a[5];
		w*=10;
		w+=a[2];
		w*=10;
		w+=a[6];
		if(q+w==n){
			int temp1=q;
			int temp2=w;
			int temp3=n;
			int len1=0;
			int len2=0;
			int len3=0;
			while(temp1>0){
				len1++;
				temp1/=10;
			}
			while(temp2>0){
				len2++;
				temp2/=10;
			}
			while(temp3>0){
				len3++;
				temp3/=10;
			}
			for(j=len1;j<5;j++){
				printf(" ");
			}
			printf("  %d\n",q);
			printf("+ ");
			for(j=len2;j<5;j++){
				printf(" ");
			}
			printf("%d\n",w);
			printf("-------\n");
			if(len3==5){
				printf(" ");
			}
			printf(" %d",n);
			return 0;
		}
		next_permutation(a,a+10);
	}
	printf("No Answer");
}
