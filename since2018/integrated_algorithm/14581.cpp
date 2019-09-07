#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	string s;
	cin>>s;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==1 && j==1){
				printf(":%s:",s.c_str());
			}
			else{
				printf(":fan:");	
			}
		}
		printf("\n");
	}
}
