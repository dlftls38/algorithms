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
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		string s;
		cin>>s;
		int len=s.length();
		int check[1000]={0};
		int i,j;
		for(i=n;i<len;i+=n*2){
			reverse(s.begin()+i,s.begin()+i+n);
		}
		for(i=0;i<len;i++){
			for(j=i;j<len;j+=n){
				if(check[j]==0){
					check[j]=1;
					printf("%c",s[j]);
				}
			}
		}
		printf("\n");
	}
}
