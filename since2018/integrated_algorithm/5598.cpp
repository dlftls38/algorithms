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
	char a[1001]={0};
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]-3<'A'){
			printf("%c",a[i]-3+26);
		}
		else{
			printf("%c",a[i]-3);
		}
	}
}
