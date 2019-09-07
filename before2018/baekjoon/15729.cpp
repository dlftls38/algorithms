#include <stdio.h>
int a[1000001];
void ch(int position){
	if(a[position]==1) a[position]=0;
	else a[position]=1;
}
int main(){
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<n;i++){
		if(a[i]==1){
			ch(i+1);
			ch(i+2);
			count++;
		}
	}
	printf("%d",count);
}
