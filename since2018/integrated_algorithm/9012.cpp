#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		char a[60];
		scanf("%s",a);
		int j;
		stack<int>s;
		int check=0;
		for(j=0;j<strlen(a);j++){
			if(a[j]=='('){
				s.push('1');
			}
			else{
				if(s.empty()){
					check=1;
				}
				else{
					s.pop();
				}
			}
		}
		if(check==0 && s.empty()){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
} 

