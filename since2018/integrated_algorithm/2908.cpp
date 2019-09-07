#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=0,d=0;
	c+=a%10;
	c*=10;
	a/=10;
	c+=a%10;
	c*=10;
	a/=10;
	c+=a%10;
	
	d+=b%10;
	d*=10;
	b/=10;
	d+=b%10;
	d*=10;
	b/=10;
	d+=b%10;
	printf("%d",max(c,d));
}
