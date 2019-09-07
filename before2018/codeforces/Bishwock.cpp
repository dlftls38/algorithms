#include <stdio.h>
int main(){
	char a[2][101]={0};
	scanf("%s",a[0]);
	scanf("%s",a[1]);
	int answer=0;
	for(int i=0;i<100;i++){
		if(a[0][i]=='0' && a[1][i]=='0' && a[0][i+1]=='0'){
			a[0][i+1]='X';
			answer++;
		}
		else if(a[0][i]=='0' && a[1][i]=='0' && a[1][i+1]=='0'){
			a[1][i+1]='X';
			answer++;
		}
		else if(a[0][i]=='0' && a[0][i+1]=='0' && a[1][i+1]=='0'){
			a[1][i+1]='X';
			a[0][i+1]='X';
			answer++;
			i++;
		}
		else if(a[1][i]=='0' && a[0][i+1]=='0' && a[1][i+1]=='0'){
			a[1][i+1]='X';
			a[0][i+1]='X';
			answer++;
			i++;
		}
	}
	printf("%d",answer);
}
