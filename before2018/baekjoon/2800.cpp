#include <stdio.h>
#include <string.h>

int main(){
	
	char a[300]={0}; // ���� ���� 
	char b[300][300]={0}; // ��ȣ �����ذ��鼭 ���� �ĵ� ���� �迭 
	int aa[300]=0,i,j,k=1; // ��ȣ ��ġ�� ��ȣ ���� 
	scanf("%s",a);
	int len = strlen(a); // ���� ���� ���� 
	for(i=0;i<len;i++){
		
		if(a[i]==')'){
			
			for(j=i-1;j>-1;j++){
				
				if(a[j]=='('){
					
					aa[j]=k;
					aa[i]=k++;
				}
			}
		}
	} // ��ȣ ��ġ ���ڸű�
	
	 
	
	
}
