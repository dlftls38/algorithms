#include <stdio.h>
#include <algorithm>
using namespace std;
int MIN(int x,int y){
	return x<y ? x:y;
}
int MAX(int x,int y){
	return x>y ? x:y;
}
int ABS(int x,int y){
	return x-y<0 ? y-x : x-y;
}
int main(){
	int q1[10001]={0};
	int q2[10001]={0};
	int q3[10001]={0};
	int tail1=0;
	int tail2=0;
	int tail3=0;
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int i;
	for(i=0;i<a;i++){
		scanf("%d",&q1[i]);
	}
	for(i=0;i<b;i++){
		scanf("%d",&q2[i]);
	}
	for(i=0;i<c;i++){
		scanf("%d",&q3[i]);
	}
	sort(q1,q1+a);
	sort(q2,q2+b);
	sort(q3,q3+c);
	int answer=ABS(MAX(q1[tail1],MAX(q2[tail2],q3[tail3])),MIN(q1[tail1],MIN(q2[tail2],q3[tail3])));
	while(1){
		//printf("%d %d %d\n",tail1,tail2,tail3);
		if(tail1==a-1 && tail2==b-1 && tail3==c-1){
			break;
		}
		if(MIN(q1[tail1],MIN(q2[tail2],q3[tail3]))==q1[tail1]){
			if(tail1+1<a){
				tail1++;
			}
			else{
				if(MIN(q2[tail2],q3[tail3])==q2[tail2]){
					if(tail2+1<b){
						tail2++;
					}
					else{
						tail3++;
					}
				}
				else{
					if(tail3+1<c){
						tail3++;
					}
					else{
						tail2++;
					}
				}
			}
		}
		else if(MIN(q1[tail1],MIN(q2[tail2],q3[tail3]))==q2[tail2]){
			if(tail2+1<b){
				tail2++;
			}
			else{
				if(MIN(q1[tail2],q3[tail3])==q1[tail1]){
					if(tail1+1<a){
						tail1++;
					}
					else{
						tail3++;
					}
				}
				else{
					if(tail3+1<c){
						tail3++;
					}
					else{
						tail1++;
					}
				}
			}
		}
		else{
			if(tail3+1<c){
				tail3++;
			}
			else{
				if(MIN(q1[tail1],q2[tail2])==q1[tail1]){
					if(tail1+1<a){
						tail1++;
					}
					else{
						tail2++;
					}
				}
				else{
					if(tail2+1<b){
						tail2++;
					}
					else{
						tail1++;
					}
				}
			}
		}
		if(ABS(MAX(q1[tail1],MAX(q2[tail2],q3[tail3])),MIN(q1[tail1],MIN(q2[tail2],q3[tail3])))<answer){
			answer=ABS(MAX(q1[tail1],MAX(q2[tail2],q3[tail3])),MIN(q1[tail1],MIN(q2[tail2],q3[tail3])));
		}
	}
	printf("%d",answer);
}
