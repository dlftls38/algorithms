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
	char a[51]={0};
	scanf("%s",a);
	int len=strlen(a);
	int i,j;
	int cur=1;
	for(i=0;i<len;i++){
		if(cur==1){
			if(a[i]=='A'){
				cur=2;
			}
			else if(a[i]=='C'){
				cur=3;
			}
		}
		else if(cur==2){
			if(a[i]=='A'){
				cur=1;
			}
			else if(a[i]=='B'){
				cur=3;
			}
		}
		else if(cur==3){
			if(a[i]=='C'){
				cur=1;
			}
			else if(a[i]=='B'){
				cur=2;
			}
		}
	}
	printf("%d",cur);
}
