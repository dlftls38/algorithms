#include <cstdio>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - √÷º“»¸
using namespace std;
typedef pair<int,int> ii;
priority_queue<ii,vector<ii>,greater<ii> > pq;
char s[500001];
char stack[500001];
int check[500001];
int main(){
	int n,k;
	scanf("%d%d%s",&n,&k,s);
	int i,j;
	int count=0;
	int top=0;
	stack[top++]=s[0];
	for(i=1;i<n;i++){
		if(count==k){
			stack[top++]=s[i];
		}
		else{
			if(stack[top-1]<s[i]){
				count++;
				top--;
				if(top>0){
					i--;
				}
				else{
					stack[top++]=s[i];
				}
			}
			else{
				stack[top++]=s[i];
			}			
		}
	}		
	for(i=0;i<top;i++){
		pq.push(ii(stack[i],i));	
	}
	for(i=0;i<k-count;i++){
		check[pq.top().second]=1;
		pq.pop();
	}
	for(i=0;i<top;i++){
		if(check[i]==0){
			printf("%c",stack[i]);	
		}
	}
	return 0;
}
