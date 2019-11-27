#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	vector<int>v(50);
	for(int i=0;i<50;i++){
		scanf("%d",&v[i]);
	}
	int h;
	scanf("%d",&h);
	for(int i=0;i<50;i++){
		if(v[i]==h){
			if(i+1<=5){
				printf("A+");
			}
			else if(i+1<=15){
				printf("A0");
			}
			else if(i+1<=30){
				printf("B+");
			}
			else if(i+1<=35){
				printf("B0");
			}
			else if(i+1<=45){
				printf("C+");
			}
			else if(i+1<=48){
				printf("C0");
			}
			else{
				printf("F");
			}
			break;
		}
	}
}
