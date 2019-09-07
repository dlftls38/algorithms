#include <stdio.h>
#include <string.h>
int main(){
	char q[1100]={0};
	int i,input,input2=0,len;
	while(1){
		input=0;
		scanf("%s",q);
		len = strlen(q);
		for(i=0;i<len;i++){
			input += q[i]-48;
			q[i]=0;
		}
		if(input==0){
			
			break;
		}
		else{
			while(1){

				while(1){
					if(input<10){
						
						input2 += input%10;
						break;
					}
					else{
						
						input2 += input%10;
						input/=10;						
					}
				}
				input = input2;
				input2=0;
				if(input<10){
					
					printf("%d\n",input);
					break;
				}
				else{
					continue;
				}
			}
		}
	}
}
