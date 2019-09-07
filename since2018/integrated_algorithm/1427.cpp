#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	char a[30]={0};
	scanf("%s",a);
	int len=strlen(a);
	sort(a,a+len);
	reverse(a,a+len);
	printf("%s",a);
}
