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
char a[501][501];
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int i,j;
	for(i=0;i<r;i++){
		scanf("%s",a[i]);
		for(j=0;j<c;j++){
			if(a[i][j]=='.'){
				a[i][j]='D';
			}
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]=='W'){
				if(i+1<r && a[i+1][j]=='S'){
					printf("0");
					return 0;
				}
				if(j+1<c && a[i][j+1]=='S'){
					printf("0");
					return 0;
				}
				if(i-1>=0 && a[i-1][j]=='S'){
					printf("0");
					return 0;
				}
				if(j-1>=0 && a[i][j-1]=='S'){
					printf("0");
					return 0;
				}
			}
		}
	}
	printf("1\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
