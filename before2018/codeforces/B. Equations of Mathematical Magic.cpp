#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int j;
	for(int i=0;i<t;i++){
		int a;
		scanf("%d",&a);
		int answer=0;
		for(j=0;j<31;j++){
			if(a%2==1){
				answer++;
			}
			a/=2;
		}
		int result=1;
		for(j=0;j<answer;j++){
			result*=2;
		}
		printf("%d\n",result);
	}
}
