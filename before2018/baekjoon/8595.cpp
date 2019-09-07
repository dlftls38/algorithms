#include <stdio.h>
char a[5010000];
int main(){
	int n,i,k,kk,count,p,num2=0,kkk;
	long long answer=0;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<n;i++){
		if(48<=a[i] && a[i]<=57){
			count=1;
			p=0;
			while(1){
				if(count==7){
					p=1;
					break;
				}
				if(i+1<n && 48<= a[i+1] && a[i+1]<=57){
					i++;
					count++;
				}
				else break;
			}
			if(p==1){
				continue;
			}
			k=2;
			kkk=1;
			count=1;
			if(num2==0){
				while(1){
					if(i+k>=n){
						p=1;
						break;
					}
					if(48<= a[i+k] && a[i+k]<=57){
						while(1){
							if(count==7){
								p=1;
								break;
							}
							if(i+k+kkk<n && 48<= a[i+k+kkk] && a[i+k+kkk]<=57){
								kkk++;
								count++;
							}
							else{
								num2=1;
								break;
							}
						}
						if(p==1){
							count=1;
							k+=kkk;
							kkk=1;
							p=0;
							while(1){
								if(i+k>=n){
									p=1;
									break;
								}
								if(a[i+k]>=48 && a[i+k]<=57){
									k++;
								}
								else{
									break;
								}
							}
						}
						if(num2==1){
							break;
						}
					}
					else k++;
				}
				if(p==1){
					break;
				}
			}
			k=0;
			kk=1;
			while(1){
				answer+=(a[i-k]-48)*kk;
				k++;
				kk*=10;
				if(i-k>-1 && 48<=a[i-k] && a[i-k]<=57) continue;
				else break;
			}
		}
	}
	printf("%lld",answer);
}
