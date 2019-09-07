#include <stdio.h>
#include <string.h>

	char a[1000],b[1000],c[1000],a1[1000],b1[1000],c1[1000],d1[1000],e1[1000];
int main(){
	
	int i;
	scanf("%s%s%s",a,b,c);
	int x=strlen(a);
	int y=strlen(b);
	int z=strlen(c);
	
	if (strcmp(a,b)<0 || strcmp(a,b)==0){
		
		for (i=0; i<x; i++){
			
			b1[i] = a[i];
		}
		for (i=0; i<y; i++){
			
			d1[i] = b[i];
		}
	}
	
	if (strcmp(a,b)>0){
		
		for (i=0; i<y; i++){
			
			b1[i] = b[i];
		}
		for (i=0; i<x; i++){
			
			d1[i] = a[i];
		}
	}
	
	if (strcmp(d1,c)<0){
		
		for (i=0; i<z; i++){
			
			e1[i] = c[i];
		}
		printf("%s\n%s\n%s",b1,d1,e1);
	}
	else if (strcmp(d1,c)==0){
		
		printf("%s\n%s\n%s",b1,d1,d1);
	}
	else if (strcmp(b1,c)<0 && strcmp(d1,c)>0){
		
		for (i=0; i<z; i++){
			
			c1[i] = c[i];
		}
		printf("%s\n%s\n%s",b1,c1,d1);
	}
	else if (strcmp(b1,c)>0){
		
		for (i=0; i<z; i++){
			
			a1[i] = c[i];
		}
		printf("%s\n%s\n%s",a1,b1,d1);
	}
	else if (strcmp(b1,c)==0){
		
		printf("%s\n%s\n%s",b1,b1,d1);
	}
	else if (strcmp(b1,c)>0 && strcmp(d1,c)>0){
		
		for (i=0; i<z; i++){
			
			a1[i] = c[i];
		}
		printf("%s\n%s\n%s",a1,b1,d1);
	}
	else if (strcmp(b1,c)==0 && strcmp(d1,c)>0){
		
		for (i=0; i<z; i++){
			
			c1[i] = c[i];
		}
		printf("%s\n%s\n%s",b1,c1,d1);
	}
	else {
			for (i=0; i<z; i++){
			
			a1[i] = c[i];
		}
		printf("%s\n%s\n%s",b1,b1,d1);
	}
	
}
