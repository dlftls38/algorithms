#include <stdio.h>
int main(){
	int length_s;
	int length_t;
	int length_q;
	scanf("%d%d%d",&length_s,&length_t,&length_q);
	char s[1001]={0};
	char t[1001]={0};
	scanf("%s%s",s,t);
	int i,j,k;
	int check[1001]={0};
	for(i=0;i<length_q;i++){
		int l,r;
		int answer=0;
		scanf("%d%d",&l,&r);
		for(j=l-1;j<r;j++){
			if(r-j<length_t){
				break;
			}
			if(check[j]==1){
				answer++;
				continue;
			}
			else if(check[j]==-1){
				continue;
			}
			if(s[j]==t[0]){
				int sum=0;
				for(k=0;k<length_t;k++){
					if(s[j+k]==t[k]){
						sum++;
					}
					else{
						break;
					}
				}
				if(sum==length_t){
					answer++;
					check[j]=1;
				}
				else{
					check[j]=-1;
				}
			}
		}
		printf("%d\n",answer);
	}
}
