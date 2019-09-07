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
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		char a[101]={0};
		char b[101]={0};
		int checka[26]={0};
		int checkb[26]={0};
		int check=0;
		scanf("%s%s",a,b);
		for(j=0;j<strlen(a);j++){
			checka[a[j]-'a']++;
		}
		for(j=0;j<strlen(b);j++){
			checkb[b[j]-'a']++;
		}
		for(j=0;j<26;j++){
			if(checka[j]!=checkb[j]){
				check=1;
			}
		}
		if(check==0){
			printf("%s & %s are anagrams.\n",a,b);
		}
		else{
			printf("%s & %s are NOT anagrams.\n",a,b);
		}
	}
}
