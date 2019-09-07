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
	int n;
	scanf("%d",&n);
	char input[100][101]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",input[i]);
	}
	int k;
	scanf("%d",&k);
	if(k==1){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%c",input[i][j]);
			}
			printf("\n");
		}
	}
	else if(k==2){
		for(i=0;i<n;i++){
			for(j=n-1;j>=0;j--){
				printf("%c",input[i][j]);
			}
			printf("\n");
		}
	}
	else{
		for(i=n-1;i>=0;i--){
			for(j=0;j<n;j++){
				printf("%c",input[i][j]);
			}
			printf("\n");
		}
	}
}
