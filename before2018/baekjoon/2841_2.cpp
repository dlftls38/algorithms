#include <stdio.h>
int stack[7][30001];
int top[7];
int main(){
	int n,p;
	int line,fret;
	int i;
	int count=0;
	scanf("%d%d",&n,&p);
	while(n--){
		scanf("%d%d",&line,&fret);
		int flag=0;
		for(i=top[line]-1;i>-1;i--){
			if(stack[line][i]>fret){
				top[line]--;
				stack[line][top[line]]=0;
				count++;
			}
			else if(stack[line][i]==fret){
				flag=1;
				break;
			}
			else{
				flag=1;
				stack[line][top[line]]=fret;
				top[line]++;
				count++;
				break;
			}
		}
		if(flag==0){
			stack[line][top[line]]=fret;
			top[line]++;
			count++;	
		}
	}
	printf("%d",count);
}
