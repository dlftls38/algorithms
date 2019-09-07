#include <stdio.h>
int a[500][500];
void recur(int y,int x,int kind){
	int i,j;
	int count=0;
	if(kind==1){
		for(i=y-1;i>-1;i--){
			if(a[i][x]==0){
				a[i+1][x]=1;
				count++;
			}
			else{
				break;
			}
		}
		if(count==0){
			return;
		}
		else{
			recur(i+2,x,2);	
		}
	}
	else if(kind==2){
		for(i=x-1;i>-1;i--){
			if(a[y][i]==0){
				a[y][i+1]=1;
				count++;
			}
			else{
				break;
			}
		}
		if(count==0){
			return;
		}
		else{
			recur(y,i+2,3);	
		}
	}
	else if(kind==3){
		for(i=y+1;i<500;i++){
			if(a[i][x]==0){
				a[i-1][x]=1;
				count++;
			}
			else{
				break;
			}
		}
		if(count==0){
			return;
		}
		else{
			recur(i-2,x,4);	
		}
	}
	else{
		for(i=x+1;i<500;i++){
			if(a[y][i]==0){
				a[y][i-1]=1;
				count++;
			}
			else{
				break;
			}
		}
		if(count==0){
			return;
		}
		else{
			recur(y,i-2,1);	
		}
	}
}
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	if (n==1){
		printf("*");
	}
	else{
		for(i=1;i<4*n-2;i++){
			a[1][i]=1;
		}
		for(i=1;i<4*n;i++){
			a[i][1]=1;
		}
		for(i=1;i<4*n-2;i++){
			a[4*n-1][i]=1;
		}
		recur(4*n-1,4*n-3,1);
		for(i=1;i<4*n;i++){
			for(j=1;j<4*n-2;j++){
				if(a[i][j]==1){
					printf("*");
				}
				else{
					if(i==2){
					}
					else{
						printf(" ");	
					}
				}
			}
			printf("\n");
		}
	}
}
