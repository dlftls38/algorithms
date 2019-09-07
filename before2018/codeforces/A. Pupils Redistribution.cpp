#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[6]={0};
	int b[6]={0};
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);	
		a[x]++;
	}
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);	
		b[x]++;	
	}
	int p=0;
	int q=0;
	int w=0;
	for(int i=1;i<6;i++){
		if((a[i]+b[i])%2==1){
			p=1;
			break;
		}
		else{
			while(1){
				if(a[i]>b[i]){
					q++;
					a[i]--;
					b[i]++;
				}
				else if (a[i]==b[i]){
					break;
				}
				else{
					w++;
					a[i]++;
					b[i]--;
				}
			}
		}
	}
	if(p==1){
		printf("-1");
	}
	else{
		if(q==w){
			printf("%d",q);
			
		}
		else{
			printf("-1");
		}
	}
}
