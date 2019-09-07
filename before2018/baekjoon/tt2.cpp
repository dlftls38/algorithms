#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d",&n);
	
	if(n%400==0 && n%600==0){
		
		printf("È²±ÝµÅÁöÀ±³â");
	}
	
	else if (n%400==0 && n%600>0){
		
		printf("À±³â");
	}
	else if (n%400!=0 && n%600==0){
		
		printf("È²±ÝµÅÁö");
	}
	else if (n%100==0 && n%400!=0){
		
		printf("²Ü²Ü");
	}
	else if (n%4==0 && n%100!=0){
		
		printf("À±³â");
	}
	else if (n%4==0 && n%100==0){
		
		printf("²Ü²Ü");
	}
	else {
		printf("²Ü²Ü");
	}
} 
