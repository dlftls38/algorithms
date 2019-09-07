#include <cstdio>
#include <cmath>
#include <stack>
using namespace std;
char value[]={"IVXLCDM"};
int sumValue(char input[]){
	int sum=0;
	for(int i=0;input[i];i++){
		int nowValue,nextValue=0;
		for(int j=0;j<7;j++){
			if(input[i]==value[j]){
				nowValue=pow(10,j/2);
				nowValue*=j%2?5:1;
				break;
			}
		}
		if(input[i+1]){
			for(int j=0;j<7;j++){
				if(input[i+1]==value[j]){
					nextValue=pow(10,j/2);
					nextValue*=j%2?5:1;
					break;
				}
			}
		}
		if(nowValue<nextValue){
			sum+=nextValue-nowValue;
			i++;
		}
		else sum+=nowValue;
	}
	return sum;
}
int lenNum(int num){
	int len=0;
	while(num) num/=10,len++;
	return len;
}
char* romeValue(int lastValue,char romeString[]){
	int idx=0;
	while(lastValue>999){
		lastValue-=1000;
		romeString[idx++]='M';
	}
	int len=lenNum(lastValue);
	for(int i=len;i>0;i--){
		int tempValue=lastValue/(int)pow(10,i-1);
		char insertChar;
		if(tempValue%5<4){
			insertChar=value[i*2-2];
			if(tempValue>4)
				romeString[idx++]=value[i*2-1];
			for(int j=tempValue%5;j;j--){
				romeString[idx++]=insertChar;
			}
		}
		else{
			char insertFrontChar=value[i*2-2];
			if(tempValue>4)
				insertChar=value[i*2];
			else
				insertChar=value[i*2-1];
			romeString[idx++]=insertFrontChar,romeString[idx++]=insertChar;
		}
		lastValue%=(int)pow(10,i-1);
	}
	return romeString;
}
int main(){
	stack<int> s;
	char input[20]={};
	for(;scanf("%s",input)!=EOF;){
		if(input[0]=='+'||input[0]=='-'||input[0]=='/'||input[0]=='*'||input[0]=='='){
			if(input[0]=='='){
				if(s.empty())
					puts("stack underflow");
				else{
					if(0<s.top()&&s.top()<5000){
						char tempArr[20]={};
						printf("%s\n",romeValue(s.top(),tempArr));
					}
					else
						puts("out of range exception");
				}
			}
			else{
				if(s.size()<2)
					puts("stack underflow");
				else{
					int a=s.top();
					s.pop();
					int b=s.top();
					s.pop();
					switch(input[0]){
						case '+':
							s.push(a+b);
							break;
						case '-':
							s.push(b-a);
							break;
						case '*':
							s.push(a*b);
							break;
						case '/':
							if(a==0){
								puts("division by zero exception");
								s.push(b);
							}
							else s.push(b/a);
							break;
					}
				}
			}
		}
		else
			s.push(sumValue(input));
	}
	return 0;
}
