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
int n,tot;
int stk[100001];
char s[100001];
 
int main(){
	scanf("%s",s+1);
	n=strlen(s+1);
	for (int i=1;i<=n;i++)
	  if (s[i]=='1') stk[++tot]=i;
	    else if (tot) tot--;
	for (int i=1;i<=tot;i++)
	  s[stk[i]]='0';
	for (int i=1;i<=n;i++)
	  printf("%c",s[i]);
	return 0;
}
