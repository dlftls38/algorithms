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
	int i,j;
	int a=0;
	int b=0;
	for(i=2;i<=n;i++){
		int x=i;
		while(1){
			if(x%2==0){
				x/=2;
				a++;
			}
			else{
				break;
			}
		}
		while(1){
			if(x%5==0){
				x/=5;
				b++;
			}
			else{
				break;
			}
		}
	}
	printf("%d",min(a,b));
}
