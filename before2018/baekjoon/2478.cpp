#include <stdio.h>
int main(){
	int i,j,k;
	int n;
	int a[1600]={0};
	int b[1600]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i+n]=a[i];
		a[i+2*n]=a[i];
		b[i]=i+1;
		b[i+n]=i+1;
		b[i+2*n]=i+1;
	}
	int sum=0;
	int end;
	int start;
	for(i=1;i<n+1;i++){
		for(j=3*n-1;j>-1;j--){
			if(a[j]==i){
				break;
			}
		}
		k=(i-1);
		int count=0;
		for(j=j;j>-1;j-- && k++){
			if(a[j]==b[k]){
				count++;
			}
			else{
				break;
			}
			if(count==n+1){
				count--;
				break;
			}
		}
		if(sum<count){
			sum=count;
			start=i;
			end=a[j+1];
		}
	}
	if(sum==n){
		printf("1\n1 %d\n",n);
		int q=1,w=1+sum-1;
		for(i=0;i<sum/2;i++){
			int temp;
			temp = b[q+i];
			b[q+i]=b[w-i];
			b[w-i]=temp;
		}
		for(i=q+1;i<3*n;i++){
			if(b[i]==a[0]){
				printf("%d",i-q);
				break;
			}
		}
	}
	else{
		for(i=1;i<3*n;i++){
			if(b[i]==start){
				printf("%d\n",i);
				break;
			}
		}
		int q=i,w=i+sum-1;
		printf("1 %d\n",sum);
		for(i=0;i<sum/2;i++){
			int temp;
			temp = b[q+i];
			b[q+i]=b[w-i];
			b[w-i]=temp;
		}
		for(i=q+1;i<3*n;i++){
			if(b[i]==a[0]){
				printf("%d",i-q);
				break;
			}
		}	
	}
}
