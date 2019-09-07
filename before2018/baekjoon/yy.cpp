#include <stdio.h>

int main(){
	
	int q,w,e,choice;
	int sch = 100;
	float avg;
	char grade;
	
	printf("세 과목의 점수를 입력하세요 : ");
	scanf("%d%d%d",&q,&w,&e);
	
	avg = float((q+w+e))/3;
	
	if (avg >= 90){
		grade = 'A';
		choice = 4;
	}
	
	else if (avg >= 80){
		grade = 'B';
		choice = 3;
	}
	
	else if (avg >= 70){
		grade = 'C';
		choice = 2;
	}
	
	else if (avg >= 60){
		grade = 'D';
		choice = 1;
	}
	
	else {
		grade = 'F';
		choice = 0;
	}
	
	switch(choice)
	{
		case 4:
			printf("이번학기 평균은 %.1f 이며 학점은 %c 입니다.\n", avg, grade);
			printf("다음의 성적에 따라 금번 장학금은 %d만원입니다.",sch*choice);
			break;

		case 3:
			printf("이번학기 평균은 %.1f 이며 학점은 %c 입니다.\n", avg, grade);
			printf("다음의 성적에 따라 금번 장학금은 %d만원입니다.",sch*choice);
			break;
			
		case 2:
			printf("이번학기 평균은 %.1f 이며 학점은 %c 입니다.\n", avg, grade);
			printf("다음의 성적에 따라 금번 장학금은 %d만원입니다.",sch*choice);
			break;
			
		case 1:
			printf("이번학기 평균은 %.1f 이며 학점은 %c 입니다.\n", avg, grade);
			printf("다음의 성적에 따라 금번 장학금은 %d만원입니다.",sch*choice);
			break;
			
		default:
			printf("이번학기 평균은 %.1f 이며 학점은 %c 입니다.\n", avg, grade);
			printf("다음의 성적에 따라 금번 장학금은 %d만원입니다.",sch*choice);			
			break;
			
	}
}
