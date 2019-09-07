#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char a[101]={0};
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]=='A'){
			
		}
		else if(a[i]=='a'){
			
		}
		else if(a[i]=='O'){
			
		}
		else if(a[i]=='o'){
			
		}
		else if(a[i]=='Y'){
			
		}
		else if(a[i]=='y'){
			
		}
		else if(a[i]=='E'){
			
		}
		else if(a[i]=='e'){
			
		}
		else if(a[i]=='U'){
			
		}
		else if(a[i]=='u'){
			
		}
		else if(a[i]=='i'){
			
		}
		else if(a[i]=='I'){
			
		}
		else if(a[i]<97){
			printf(".%c",a[i]+32);
		}
		else{
			printf(".%c",a[i]);
		}
	}
}
