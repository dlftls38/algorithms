#include <stdio.h>
#include <string.h>
int main(){
	char a[40]={0};
	int dp[40]={0};
	scanf("%s",a);
	int len = strlen(a);
	dp[0]=1;
	if(a[1]=='0'){
		dp[1]=1;
	}
	else if(((a[0]-48)*10 + a[1]-48)>=1 && ((a[0]-48)*10 + a[1]-48)<=34){
		dp[1]=2;
	}
	else{
		dp[1]=1;
	}
	for(int i=2;i<len;i++){
		if(a[i]=='0'){
			dp[i]=dp[i-2];
		}
		else if(a[i-1]=='0'){
			dp[i]=dp[i-1];
		}
		else if(((a[i-1]-48)*10 + a[i]-48)>=1 && ((a[i-1]-48)*10 + a[i]-48)<=34){
			dp[i]=dp[i-1]+dp[i-2];
		}
		else{
			dp[i]=dp[i-1];
		}
	}
	printf("%d",dp[len-1]);
}
