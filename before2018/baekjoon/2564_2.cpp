#include <stdio.h>
#define abs(a,b) (a-b>=0?a-b:b-a)
#define min(a,b) (a<b?a:b)
int main(){
	int x,y;
	int n;
	scanf("%d%d",&x,&y);
	scanf("%d",&n);
	int i,j;
	int a[100]={0};
	int b[100]={0};
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int q,w;
	scanf("%d%d",&q,&w);
	int sum=0;
	for(i=0;i<n;i++){
		int count1=0;
		int count2=0;
		if(q==1){
			if(a[i]==1){
				sum+=abs(b[i],w);
			}
			else if(a[i]==2){
				count1+=w;
				count1+=y;
				count1+=b[i];
				count2+=x-w;
				count2+=y;
				count2+=x-b[i];
				sum+=min(count1,count2);
			}
			else if(a[i]==3){
				sum+=w+b[i];
			}
			else{
				sum+=x-w+b[i];
			}
		}
		else if(q==2){
			if(a[i]==1){
				count1+=w;
				count1+=y;
				count1+=b[i];
				count2+=x-w;
				count2+=y;
				count2+=x-b[i];
				sum+=min(count1,count2);
			}
			else if(a[i]==2){
				sum+=abs(b[i],w);
			}
			else if(a[i]==3){
				sum+=w+y-b[i];
			}
			else{
				sum+=x-w+y-b[i];
			}
		}
		else if(q==3){
			if(a[i]==1){
				sum+=w+b[i];
			}
			else if(a[i]==2){
				sum+=y-w+b[i];	
			}
			else if(a[i]==3){
				sum+=abs(b[i],w);
			}
			else{
				count1+=w+x+b[i];
				count2+=y-w+x+y-b[i];
				sum+=min(count1,count2);
			}
		}
		else{
			if(a[i]==1){
				sum+=w+x-b[i];
			}
			else if(a[i]==2){
				sum+=y-w+x-b[i];	
			}
			else if(a[i]==3){
				count1+=w+x+b[i];
				count2+=y-w+x+y-b[i];
				sum+=min(count1,count2);
			}
			else{
				sum+=abs(b[i],w);
			}
		}
	}
	printf("%d",sum);
}
