#include <stdio.h>

int main(){
	
	int q,w,e,choice;
	int sch = 100;
	float avg;
	char grade;
	
	printf("�� ������ ������ �Է��ϼ��� : ");
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
			printf("�̹��б� ����� %.1f �̸� ������ %c �Դϴ�.\n", avg, grade);
			printf("������ ������ ���� �ݹ� ���б��� %d�����Դϴ�.",sch*choice);
			break;

		case 3:
			printf("�̹��б� ����� %.1f �̸� ������ %c �Դϴ�.\n", avg, grade);
			printf("������ ������ ���� �ݹ� ���б��� %d�����Դϴ�.",sch*choice);
			break;
			
		case 2:
			printf("�̹��б� ����� %.1f �̸� ������ %c �Դϴ�.\n", avg, grade);
			printf("������ ������ ���� �ݹ� ���б��� %d�����Դϴ�.",sch*choice);
			break;
			
		case 1:
			printf("�̹��б� ����� %.1f �̸� ������ %c �Դϴ�.\n", avg, grade);
			printf("������ ������ ���� �ݹ� ���б��� %d�����Դϴ�.",sch*choice);
			break;
			
		default:
			printf("�̹��б� ����� %.1f �̸� ������ %c �Դϴ�.\n", avg, grade);
			printf("������ ������ ���� �ݹ� ���б��� %d�����Դϴ�.",sch*choice);			
			break;
			
	}
}
