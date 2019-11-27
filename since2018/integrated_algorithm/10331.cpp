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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	string str;
	cin>>str;
	int result;
	scanf("%d",&result);
	int i,j;
	int len=str.length();
	int sum_lr=str[0]-48;
	for(i=1;i<len;i+=2){
		if(str[i]=='+'){
			sum_lr+=str[i+1]-48;
		}
		else if(str[i]=='*'){
			sum_lr*=str[i+1]-48;
		}
	}
	stack<int>mul;
	mul.push(str[0]-48);
	for(i=1;i<len;i+=2){
		if(str[i]=='*'){
			int temp = mul.top();
			mul.pop();
			mul.push(temp*(str[i+1]-48));
		}
		else{
			mul.push(str[i+1]-48);
		}
	}
	int sum_mul=0;
	while(!mul.empty()){
		sum_mul+=mul.top();
		mul.pop();
	}
	if(sum_mul==result && sum_lr==result){
		printf("U");
	}
	else if(sum_mul==result){
		printf("M");
	}
	else if(sum_lr==result){
		printf("L");
	}
	else{
		printf("I");
	}
}
