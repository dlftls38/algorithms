#include <stdio.h>
int sequence[10];
long long answer;
int num;
void recursive(int start){
	long long spare=1;
	spare*=num-sequence[0];
	for(int i=2;i<num;i++){
		spare*=i;
	}
	for(int i=0;i<10;i++){
		if(sequence[i]>1){
			for(int j=2;j<sequence[i]+1;j++){
				spare/=j;
			}
		}
	}
	answer+=spare;
	for(int i=start;i<10;i++){
		if(sequence[i]>1){
			for(int j=1;j<sequence[i];j++){
				sequence[i]-=j;
				num-=j;
				recursive(i+1);
				sequence[i]+=j;
				num+=j;				
			}
		}
	}
}
int main(){
	char n[19]={0};
	scanf("%s",n);
	for(int i=0;n[i]-48<=9 && n[i]-48>=0;i++){
		sequence[n[i]-48]++;
	}
	for(int i=0;i<10;i++){
		num+=sequence[i];
	}
	recursive(0);
	printf("%lld",answer);
}
