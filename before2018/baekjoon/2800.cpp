#include <stdio.h>
#include <string.h>

int main(){
	
	char a[300]={0}; // 받은 수식 
	char b[300][300]={0}; // 괄호 제거해가면서 나온 식들 넣을 배열 
	int aa[300]=0,i,j,k=1; // 괄호 위치와 번호 저장 
	scanf("%s",a);
	int len = strlen(a); // 받은 수식 길이 
	for(i=0;i<len;i++){
		
		if(a[i]==')'){
			
			for(j=i-1;j>-1;j++){
				
				if(a[j]=='('){
					
					aa[j]=k;
					aa[i]=k++;
				}
			}
		}
	} // 괄호 위치 숫자매김
	
	 
	
	
}
