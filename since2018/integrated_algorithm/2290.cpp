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
char number[10][11][100][100];
int main(){
	int s;
	scanf("%d",&s);
	string n;
	cin>>n;
	int len=n.length();
	int i,j,k,l;
	for(k=0;k<10;k++){
		if(k==0){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					for(j=0;j<s+2;j++){
						number[k][s][i][j]=' ';
					}
				}
				else{
					number[k][s][i][0]='|';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]=' ';
					}
					number[k][s][i][s+1]='|';
				}
			}			
		}
		if(k==1){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					for(j=0;j<s+2;j++){
						number[k][s][i][j]=' ';
					}
				}
				else if(i==s+1){
					for(j=0;j<s+2;j++){
						number[k][s][i][j]=' ';
					}
				}
				else{
					for(j=0;j<s+1;j++){
						number[k][s][i][j]=' ';
					}
					number[k][s][i][s+1]='|';
				}
			}			
		}
		if(k==2){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					if(i>s+1){
						number[k][s][i][0]='|';
						for(j=1;j<s+2;j++){
							number[k][s][i][j]=' ';
						}
					}
					else{
						for(j=0;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';	
					}
				}
			}			
		}
		if(k==3){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					for(j=0;j<s+1;j++){
						number[k][s][i][j]=' ';
					}
					number[k][s][i][s+1]='|';
				}
			}			
		}
		if(k==4){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					for(j=0;j<s+2;j++){
						number[k][s][i][j]=' ';
					}
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					if(i>s+1){
						for(j=0;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';
					}
					else{
						number[k][s][i][0]='|';
						for(j=1;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';	
					}
				}
			}			
		}
		if(k==5){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					if(i<s+1){
						number[k][s][i][0]='|';
						for(j=1;j<s+2;j++){
							number[k][s][i][j]=' ';
						}
					}
					else{
						for(j=0;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';
					}
				}
			}			
		}
		if(k==6){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					if(i<s+1){
						number[k][s][i][0]='|';
						for(j=1;j<s+2;j++){
							number[k][s][i][j]=' ';
						}
					}
					else{
						number[k][s][i][0]='|';
						for(j=1;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';
					}
				}
			}			
		}
		if(k==7){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					if(i==0){
						number[k][s][i][0]=' ';
						for(j=1;j<s+1;j++){
							number[k][s][i][j]='-';
						}
						number[k][s][i][s+1]=' ';	
					}
					else{
						for(j=0;j<s+2;j++){
							number[k][s][i][j]=' ';
						}
					}
				}
				else if(i==s+1){
					for(j=0;j<s+2;j++){
						number[k][s][i][j]=' ';
					}
				}
				else{
					for(j=0;j<s+1;j++){
						number[k][s][i][j]=' ';
					}
					number[k][s][i][s+1]='|';
				}
			}			
		}
		if(k==8){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					number[k][s][i][0]='|';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]=' ';
					}
					number[k][s][i][s+1]='|';
				}
			}			
		}
		if(k==9){
			for(i=0;i<2*s+3;i++){
				if(i==0 || i==2*s+2){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else if(i==s+1){
					number[k][s][i][0]=' ';
					for(j=1;j<s+1;j++){
						number[k][s][i][j]='-';
					}
					number[k][s][i][s+1]=' ';
				}
				else{
					if(i<s+1){
						number[k][s][i][0]='|';
						for(j=1;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';
					}
					else{
						for(j=0;j<s+1;j++){
							number[k][s][i][j]=' ';
						}
						number[k][s][i][s+1]='|';
					}
				}
			}			
		}
	}
	for(i=0;i<2*s+3;i++){
		for(j=0;j<len;j++){
			for(k=0;k<s+2;k++){
				printf("%c",number[n[j]-'0'][s][i][k]);
			}
			printf(" ");
		}
		printf("\n");
	}
}
