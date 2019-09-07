#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int result=0;
	for(int i=0;i<n;i++){
		int answer=0;
		for(int j=0;j<3;j++){
			int x;
			scanf("%d",&x);
			answer+=x;
		}
		if(answer>1){
			result++;
		}
	}
	printf("%d",result);
}
