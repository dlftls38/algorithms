#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
char a[100001];
int main(){
	stack<char>s;
	int i;
	scanf("%s",a);
	int count=0;
	int len = strlen(a);
	for(i=0;i<len;i++){
		if(a[i]=='('){
			s.push(a[i]);	
		}
		else{
			if(a[i-1]=='('){
				count+=s.size()-1;
			}
			else{
				count++;
			}
			s.pop();
		}
	}
	printf("%d",count);
}
