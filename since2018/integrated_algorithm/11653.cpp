#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
//	if(n==1){
//		printf("1");
//		return 0;
//	}
	int i;
	for(i=2;i<=10000000;i++){
		if(n%i==0){
			printf("%d\n",i);
			n/=i;
			i--;
		}
		if(n==1){
			break;
		}
	}
}
