#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	char a[1000]={0};
	int b;
	scanf("%s%d",a,&b);
	long long answer=0;
	long long x=1;
	for(int i=strlen(a)-1;i>-1;i--){
		if(a[i]>=48 && a[i]<=57){
			answer+=(a[i]-48)*x;
		}
		else{
			answer+=(a[i]-55)*x;
		}
		x*=b;
	}
	printf("%lld",answer);
}
