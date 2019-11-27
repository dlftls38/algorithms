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
	int question_sum=question_num[0]+question_num[1];
	for(int i=0; i<question_sum; i++){
		if(i%2==0){
			if(sum[0]<sum[1]){
				if(question_num[0]>0){
					question_num[0]--;
				}
				else{
					question_num[1]--;
					sum[1]+=9;
				}
			}
			else{
				if(question_num[0]>0){
					question_num[0]--;
					sum[0]+=9;
				}
				else{
					question_num[1]--;
				}
			}	
		}
		else{
			if(sum[0]<sum[1]){
				if(question_num[0]>0){
					question_num[0]--;
					sum[0]+=9;
				}
				else{
					question_num[1]--;
				}
			}
			else{
				if(question_num[0]>0){
					question_num[0]--;
				}
				else{
					question_num[1]--;
					sum[1]+=9;
				}
			}	
		}
	}
	string ans[2]={"Monocarp","Bicarp"};
	printf("%s", ans[sum[0]==sum[1]].c_str());
}

