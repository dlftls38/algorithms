#include <stdio.h>
int main(){
	int n,m;
	char s[210000]={0};
	char t[210000]={0};
	scanf("%d%d%s%s",&n,&m,s,t);
	if(n-1>m){
		printf("NO");
		return 0;
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]=='*'){
			count=1;
			break;
		}
	}
	if(count==0 && n<m){
		printf("NO");
		return 0;
	}
	int answer=0;
	int i,j;
	int position;
	for(i=0;i<n;i++){
		if(s[i]!=t[i]){
			if(s[i]=='*'){
				answer=1;
				position=i;
			}
			else{
				answer=-1;
			}
			break;
		}
	}
	if(answer==0){
		printf("YES");
	}
	else if(answer==-1){
		printf("NO");
	}
	else{
		for(i=n-1,j=m-1;i>position;j--,i--){
			if(s[i]!=t[j]){
				printf("NO");
				return 0;
			}
		}
		printf("YES");
	}
}
