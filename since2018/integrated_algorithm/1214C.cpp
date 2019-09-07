#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	string str;
	cin>>str;
	stack<pair<char,int>>s;
	int i,j;
	int check=0;
	for(i=0;i<n;i++){
		if(str[i]=='('){
			s.push({'(',i});
		}
		else{
			if(s.empty()){
				str.erase(i,1);
				check=1;
				break;
			}
			else{
				s.pop();
			}
		}
	}
	if(check==0){
		if(s.empty()){
			printf("Yes");
		}
		else{
			str.erase(s.top().second,1);
			stack<char>temp;
			int cnt=0;
			for(i=0;i<n-1;i++){
				if(str[i]=='('){
					temp.push('(');
				}
				else{
					if(temp.empty()){
						if(cnt==0){
							cnt=1;
						}
						else{
							printf("No");
							return 0;
						}
					}
					else{
						temp.pop();
					}
				}
			}
			if(temp.empty() && cnt==1){
				printf("YES");
			}
			else{
				printf("No");
			}
		}
	}
	else{
		stack<char>temp;
		int cnt=0;
		for(i=0;i<n-1;i++){
			if(str[i]=='('){
				temp.push('(');
			}
			else{
				if(temp.empty()){
					printf("No");
					return 0;
				}
				else{
					temp.pop();
				}
			}
		}
		if(temp.size()==1){
			printf("YES");
		}
		else{
			printf("No");
		}
	}
}
