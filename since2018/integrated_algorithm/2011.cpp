#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>

#define MOD 1000000

using namespace std;
int getLoopFibo(int fiboCnt) {
    if (fiboCnt <= 1) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        int sum = 0;
        
        for (int i = 2; i <= fiboCnt; i++) {
            sum = a + b;
            sum%=MOD;
            a = b;
            a%=MOD;
            b = sum;
            b%=MOD;
        }
            
        return sum;
    }
}


int main(){
	int n;
	char s[5001]={0};
	scanf("%s",s);
	int i;
	int a[5000]={0};
	int len= strlen(s);
	for(i=0;i<len;i++){
		a[i]=s[i]-48;
	}
	int b[5000]={0};
	int real_len=0;
	for(i=0;i<len;i++){
		if(a[i]==0){
			if(i>0){
				b[real_len-1]=b[real_len-1]*10;
			}
			else{
				b[real_len++]=0;
			}
		}
		else{
			b[real_len++]=a[i];
		}
	}
	for(i=0;i<real_len;i++){
		if(b[i]>=1 && b[i]<=26){
			
		}
		else{
			printf("0");
			return 0;
		}
	}
//	for(i=0;i<real_len;i++){
//		printf("%d ",b[i]);
//	}
//	printf("\n");
	int c[5000]={0};
	for(i=0;i<real_len-1;i++){
		if(10<=b[i] && b[i]<=26){
			c[i]=1;
		}
		else if(1<=b[i] && b[i]<=9){
			if(1<=b[i+1] && b[i+1]<=9 && 10<=b[i]*10 + b[i+1] && b[i]*10 + b[i+1] <=26){
				if(i==0){
					c[i]=2;
				}
				else{
					c[i]=c[i-1]+1;
				}
			}
			else{
				c[i]=1;
			}
		}
	}
	c[real_len-1]=1;
//	for(i=0;i<real_len;i++){
//		printf("%d ",c[i]);
//	}
//	printf("\n");
	long long answer=1;
	for(i=0;i<real_len;i++){
		if(c[i]==1 && i>0){
			if(c[i-1]>3){
				c[i-1]=getLoopFibo(c[i-1]+1);
			}
			answer*=c[i-1];
			answer%=MOD;
		}
	}
	printf("%lld",answer);
}
