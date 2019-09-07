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
	char a[21]={0};
	scanf("%s",a);
	int len=strlen(a);
	int i,j;
	int ans=0;
	for(i=0;i<len;i++){
		if('a'<=a[i] && a[i]<='z'){
			ans+=a[i]-'a'+1;
		}
		if('A'<=a[i] && a[i]<='Z'){
			ans+=a[i]-'A'+27;
		}
	}
	for(i=2;i<ans;i++){
		if(ans%i==0){
			printf("It is not a prime word.");
			return 0;
		}
	}
	printf("It is a prime word.");
}
