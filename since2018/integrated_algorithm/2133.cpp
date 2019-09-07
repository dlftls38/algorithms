#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	long long a[5]={0};
	a[0]=1;
	for(i=0;i<n;i++){
		long long b[5]={0};
		for(j=0;j<5;j++){
			if(j==0){
				if(i%2==1){
					b[0]+=a[j];	
				}
				else{
					b[0]+=a[j];
					b[1]+=a[j];
					b[2]+=a[j];
				}
			}
			else if(j==1){
				b[0]+=a[j];
				b[4]+=a[j];
			}
			else if(j==2){
				b[0]+=a[j];
				b[3]+=a[j];
			}
			else if(j==3){
				b[2]+=a[j];
			}
			else{
				b[1]+=a[j];
			}
		}
		for(j=0;j<5;j++){
			a[j]=b[j];
		}
	}
	if(n%2==0)
		printf("%lld",a[0]);
	else
		printf("0");
}
