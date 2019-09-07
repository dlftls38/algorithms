#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	char b[500]={0};
	char c[500]={0};
	while(cin>>b>>c){
		int lenb=strlen(b);
		int lenc=strlen(c);
		int d[300][300]={0};
		for(int i=1;i<=lenb;i++){
			for(int j=1;j<=lenc;j++){
				if(b[i-1]==c[j-1]){
					d[i][j]=d[i-1][j-1]+1;
				}
				else{
					d[i][j]=max(d[i][j-1],d[i-1][j]);
				}
			}
		}
		printf("%d\n",d[lenb][lenc]);
		memset(b,0,500);
		memset(c,0,500);
	}
}

