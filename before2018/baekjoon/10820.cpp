#include <stdio.h>
#include <string.h>
int main(){
	char q[200]={0};
	int a=0,b=0,c=0,d=0,i;
	while(1){
		a=0;
		b=0;
		c=0;
		d=0;
		gets(q);
		if(q[0]==0){
			break;
		}
		else{
			
			for(i=0;i<strlen(q);i++){
				
		        if(q[i]>96) a++;
		        else if(q[i]>64) b++;
		        else if(q[i]>47) c++;
		        else if(q[i]==32) d++;
			}
		}
		printf("%d %d %d %d\n",a,b,c,d);
		for(i=0;i<200;i++){
			q[i]=0;
		}
	}
}
