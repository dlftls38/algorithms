#include <stdio.h>
#include <string.h>

int main() {
	
	int i;
	int a;
	int b;
	char first[500];
	char second[500];
	scanf("%s%s",first,second);
	a = strlen(first);
	b = strlen(second);
	
	if (a<b || a==b){
		
		for (i=0; i<a; i++){
			
			if (first[i]<second[i]){
				printf("%s\n%s",first,second);
				break;
			}
			else if (first[i]>second[i]){
				printf("%s\n%s",second,first);
				break;
			}
			if (i==a-1){
				if (a==b){
					printf("%s\n%s",second,first);
				}
				else {
					
					printf("%s\n%s",first,second);
				}
			}
		}
	}
	
	if (a>b){
		
		for (i=0; i<b; i++){
			
			if (first[i]<second[i]){
				printf("%s\n%s",first,second);
				break;
			}
			else if (first[i]>second[i]){
				printf("%s\n%s",second,first);
				break;
			}
			if (i==b-1){
				
				printf("%s\n%s",second,first);
			}
		}
	}
}

