#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char a[60][60];
int sum(int i, int j){
	int c=0;
	if(a[i][j]=='.') c++;
	if(a[i+1][j]=='.') c++;
	if(a[i][j+1]=='.') c++;
	if(a[i][j-1]=='.') c++;
	if(a[i-1][j]=='.') c++;
	return c;
}
void fill(int i, int j){
	a[i][j]='#';
	a[i][j+1]='#';
	a[i+1][j]='#';
	a[i][j-1]='#';
	a[i-1][j]='#';
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<n+1;i++){
		char b[100]={0};
		scanf("%s",b);
		for(j=0;j<strlen(b);j++){
			a[i][j+1]=b[j];
		}
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			if(sum(i,j)==5){
				fill(i,j);
			}
		}
	}
	int count=0;
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			if(a[i][j]=='.'){
				count++;
			}
		}
	}
	if(count>0){
		printf("NO");
	}
	else{
		printf("YES");
	}
}