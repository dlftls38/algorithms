#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d",&n);
	
	if(n%400==0 && n%600==0){
		
		printf("Ȳ�ݵ�������");
	}
	
	else if (n%400==0 && n%600>0){
		
		printf("����");
	}
	else if (n%400!=0 && n%600==0){
		
		printf("Ȳ�ݵ���");
	}
	else if (n%100==0 && n%400!=0){
		
		printf("�ܲ�");
	}
	else if (n%4==0 && n%100!=0){
		
		printf("����");
	}
	else if (n%4==0 && n%100==0){
		
		printf("�ܲ�");
	}
	else {
		printf("�ܲ�");
	}
} 
