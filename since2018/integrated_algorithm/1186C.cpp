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
char a[1000001];
char b[1000001];
int main(){
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int i,j;
	int cb=0;
	int cc=0;
	for(i=0;i<lenb;i++){
		if(b[i]=='1')cb++;
		if(a[i]=='1')cc++;
	}
	int ans=0;
	if((cb+cc)%2==0)ans++;
	int s=0,e=lenb-1;
	for(i=lenb;i<lena;i++){
		if(a[s]=='1')cc--;
		s++;
		e++;
		if(a[e]=='1')cc++;
		if((cb+cc)%2==0)ans++;
	}
	printf("%d",ans);
}
