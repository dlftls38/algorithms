#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int answer=0;
	while(1){
		int min=101;
		if(min>a) min=a;
		if(min>b) min=b;
		if(min>c) min=c;
		if(min==a){
			if(b<c){
				if(a+b>c){
					break;
				}
				else{
					a++;
				}
			}
			else{
				if(a+c>b){
					break;
				}
				else{
					a++;
				}
			}
		}
		else if(min==b){
			if(a<c){
				if(a+b>c){
					break;
				}
				else{
					b++;
				}
			}
			else{
				if(b+c>a){
					break;
				}
				else{
					b++;
				}
			}
		}
		else{
			if(a<b){
				if(a+c>b){
					break;
				}
				else{
					c++;
				}
			}
			else{
				if(b+c>a){
					break;
				}
				else{
					c++;
				}
			}
		}
		answer++;
	}
	printf("%d",answer);
}
