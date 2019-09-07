#include <stdio.h>
void recursion(int a[21],int count){
	int c=0;
	for(int i=19;i>-1;i--){
		if(a[i]>0){
			c++;
		}
	}
	int d=0;
	int position=0;
	for(int i=c-1;i>-1;i--){
		if(a[i]==1){
			d++;
		}
		else{
			position=i;
			break;
		}
	}
	if((c-1==d || a[position]-1<=d+1) || (a[position]>2)){
		a[position]--;
		a[position+1]=d+1;
		for(int i=position+2;i<c;i++){
			a[i]=0;
		}
		int p=position+1;
		while(1){
			if(a[p-1]<a[p]){
				a[p+1]++;
				a[p]--;
			}
			else{
				p++;
				if(p==19){
					break;
				}
			}
		}
	}
	else{
		for(int i=19;i>-1;i--){
			if(a[i]>1){
				a[i]--;
				a[i+1]++;
				int q=i;
				while(1){
					if(a[q+1]>a[q]){
						a[q+1]--;
						a[q+2]++;
						q++;
					}
					else{
						break;
					}	
				}
				break;
			}
		}		
	}
	for(int i=0;i<20;i++){
		if(a[i+1]!=0){
			printf("%d+",a[i]);
		}
		else{
			printf("%d",a[i]);
			break;
		}
	}
	printf("\n");
	count++;
	if(a[0]!=1){
		recursion(a,count);
	}
	else{
		printf("%d",count);
	}
}
int main(){
	int a[21]={0};
	scanf("%d",&a[0]);
	recursion(a,0);
}

