#include <stdio.h>
int main(){
	int n,i,now=0,p=0,count=0,t;
	int stack[100000]={0},stacktop=0,resulttop=0;
	char result[210000]={0};
	scanf("%d",&n);
	while(count<n){
		scanf("%d",&t);
		count++;
		if(p==1) continue;
		while(1){
			if(t>now){
				stack[stacktop++]=++now;
				result[resulttop++]='+';
			}
			else if(t==now){
				stack[--stacktop]=0;
				result[resulttop++]='-';
				break;
			}
			else{
				if(stack[stacktop-1]==t){
					stack[--stacktop]=0;
					result[resulttop++]='-';	
				}
				else{
					p=1;
				}
				break;
			}
		}
	}
	if(p==1){
		printf("NO");
	}
	else{
		for(i=0;i<resulttop;i++){
			printf("%c\n",result[i]);
		}
	}
}
