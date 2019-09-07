#include <stdio.h>

int main(){
	
	int i=435;
	int number[1][3];
	
	number[0][0]=i/100;
	number[0][1]=(i-(i/100)*100)/10;
	number[0][2]=(i-i/100*100-(i-i/100*100)/10*10);
	printf("%d %d %d",number[0][0],number[0][1],number[0][2]);
}
