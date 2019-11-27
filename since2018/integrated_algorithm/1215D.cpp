#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int N;
	scanf("%d", &N);
	char s[200001];
	scanf("%s", s);
	int sum[2]={0};
	int question_num[2]={0};
	for(int i=0; i<N; i++){
		if(s[i]=='?'){
			question_num[i/(N/2)]++;
		}
		else{
			sum[i/(N/2)]+=s[i]-'0';	
		}
	}
	for(int i=0; i<=1; i++){
		sum[i]+=question_num[i]/2*9;
	}
	string ans[2]={"Monocarp","Bicarp"};
	printf("%s", ans[sum[0]==sum[1]].c_str());
}
