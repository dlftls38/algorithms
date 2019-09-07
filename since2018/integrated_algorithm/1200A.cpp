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
char a[100001];
int check[10];
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",a);
	int i,j;
	int len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]=='L'){
			for(j=0;j<10;j++){
				if(check[j]==0){
					check[j]=1;
					break;
				}
			}
		}
		else if(a[i]=='R'){
			for(j=9;j>=0;j--){
				if(check[j]==0){
					check[j]=1;
					break;
				}
			}
		}
		else{
			check[a[i]-48]=0;
		}
	}
	for(i=0;i<10;i++){
		printf("%d",check[i]);
	}
}
