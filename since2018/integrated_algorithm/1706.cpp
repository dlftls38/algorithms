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
	int r,c;
	scanf("%d%d",&r,&c);
	char a[21][21]={0};
	int i,j;
	for(i=0;i<r;i++){
		scanf("%s",a[i]);
	}
	priority_queue<string,vector<string>,greater<string> >pq;
	for(i=0;i<r;i++){
		queue<char>q;
		for(j=0;j<=c;j++){
			if(a[i][j]>='a' && a[i][j]<='z'){
				q.push(a[i][j]);
			}
			else{
				if(q.size()==1){
					q.pop();
				}
				else if(q.size()==0){
					
				}
				else{
					string temp;
					while(q.size()>0){
						temp+=q.front();
						q.pop();
					}
					pq.push(temp);
				}
			}
		}
	}
	for(j=0;j<c;j++){
		queue<char>q;
		for(i=0;i<=r;i++){
			if(a[i][j]>='a' && a[i][j]<='z'){
				q.push(a[i][j]);
			}
			else{
				if(q.size()==1){
					q.pop();
				}
				else if(q.size()==0){
					
				}
				else{
					string temp;
					while(q.size()>0){
						temp+=q.front();
						q.pop();
					}
					pq.push(temp);
				}
			}
		}
	}
	printf("%s",pq.top().c_str());
}
