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
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	char a[101]={0};
	scanf("%s",a);
	int len=strlen(a);
	double val[26]={0};
	for(i=0;i<n;i++){
		scanf("%lf",&val[i]);
	}
	stack<double>s;
	for(i=0;i<len;i++){
		if(a[i]>='A' && a[i]<='Z'){
			s.push(val[a[i]-65]);
		}
		else{
			if(a[i]=='*'){
				double q=s.top();
				s.pop();
				double w=s.top();
				s.pop();
				s.push(q*w);
			}
			else if(a[i]=='/'){
				double w=s.top();
				s.pop();
				double q=s.top();
				s.pop();
				s.push(q/w);
			}
			else if(a[i]=='+'){
				double w=s.top();
				s.pop();
				double q=s.top();
				s.pop();
				s.push(q+w);
			}
			else{
				double w=s.top();
				s.pop();
				double q=s.top();
				s.pop();
				s.push(q-w);
			}
		}
	}
	printf("%.2f",s.top());
}
