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
	while(1){
		char a[101]={0};
		cin.getline(a,101);
		if(strcmp(a,".")==0){
			break;
		}
		stack<char>s;
		int len=strlen(a);
		int suc=1;
		for(int i=0;i<len;i++){
			if(a[i]=='(' || a[i]=='['){
				s.push(a[i]);
			}
			if(a[i]==')'){
				if(s.empty() || s.top()!='('){
					suc=0;
					break;
				}
				else{
					s.pop();
				}
			}
			if(a[i]==']'){
				if(s.empty() || s.top()!='['){
					suc=0;
					break;
				}
				else{
					s.pop();
				}
			}
		}
		if(!s.empty()){
			suc=0;
		}
		if(suc==0){
			printf("no\n");
		}
		else{
			printf("yes\n");
		}
	}
}
