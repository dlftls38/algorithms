#include <stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int y,d=0;
		scanf("%d",&y);
		if(y%10==0){
			printf("G");
		}
		else if(y%10==1){
			printf("H");
		}
		else if(y%10==2){
			printf("I");
		}
		else if(y%10==3){
			printf("J");
		}
		else if(y%10==4){
			printf("A");
		}
		else if(y%10==5){
			printf("B");
		}
		else if(y%10==6){
			printf("C");
		}
		else if(y%10==7){
			printf("D");
		}
		else if(y%10==8){
			printf("E");
		}
		else if(y%10==9){
			printf("F");
		}
		
		if(y%12==0){
			printf("i ");
		}
		else if(y%12==1){
			printf("j ");
		}
		else if(y%12==2){
			printf("k ");
		}
		else if(y%12==3){
			printf("l ");
		}
		else if(y%12==4){
			printf("a ");
		}
		else if(y%12==5){
			printf("b ");
		}
		else if(y%12==6){
			printf("c ");
		}
		else if(y%12==7){
			printf("d ");
		}
		else if(y%12==8){
			printf("e ");
		}
		else if(y%12==9){
			printf("f ");
		}
		else if(y%12==10){
			printf("g ");
		}
		else if(y%12==11){
			printf("h ");
		}
		
		for(int i=1;i<y;i++){
			if(i%4==0 && i%100!=0){
				d+=366;
			}
			else if(i%400==0){
				d+=366;
			}
			else{
				d+=365;
			}
		}
		if(d%7==0){
			printf("Monday\n");
		}
		else if(d%7==1){
			printf("Tuesday\n");
		}
		else if(d%7==2){
			printf("Wednesday\n");
		}
		else if(d%7==3){
			printf("Thursday\n");
		}
		else if(d%7==4){
			printf("Friday\n");
		}
		else if(d%7==5){
			printf("Saturday\n");
		}
		else if(d%7==6){
			printf("Sunday\n");
		}
	}
}
