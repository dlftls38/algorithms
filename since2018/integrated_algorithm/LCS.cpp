#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int la,lb;
	la=a.length();
	lb=b.length();
	int dp[41][41]={0};
	int i,j;
	for(i=1;i<=la;i++){
		for(j=1;j<=lb;j++){
			if(a[i-1]==b[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
			printf("%d ",dp[i][j]);
		}
		printf("\n");
	}
	string answer;
	while(dp[la][lb]!=0){
		if(dp[la][lb]==dp[la][lb-1]){
			lb--;
		}
		else if(dp[la][lb]==dp[la-1][lb]){
			la--;
		}
		else if(dp[la][lb]-1==dp[la-1][lb-1]){
			answer=a[la-1]+answer;
			la--;
			lb--;
		}
	}
	printf("%s",answer.c_str());
}
