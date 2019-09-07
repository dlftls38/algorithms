#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int answer=0;
	for(int i=0;i<n;i++){
		char a[100]={0};
		scanf("%s",a);
		if(a[0]=='+' || a[2]=='+'){
			answer++;
		}
		else{
			answer--;
		}
	}
	printf("%d",answer);
}
