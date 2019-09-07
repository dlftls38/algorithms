#include <stdio.h>
int last=0;
int chong=0;
int main(){
	int n;
	scanf("%d",&n);
	double number[6000]={0};
	int i,j;
	for(i=1;i<n+1;i++){
		scanf("%lf",&number[i]);
	}
	int weight[6000]={0};
	for(i=1;i<n+1;i++){
		scanf("%d",&weight[i]);
	}
	int right_small[6000]={0};
	int left_big[6000]={0};
	for(i=1;i<n+1;i++){
		for(j=i;j<n+1;j++){
			if(number[i]>number[j]){
				right_small[i]++;
				chong++;
			}
		}
		for(j=i;j>0;j--){
			if(number[i]<number[j]){
				left_big[i]++;
				chong++;
			}
		}
	}
	for(i=1;i<n+1;i++){
		int big=-1;
		int search=-1;
		int where=-1;
		for(j=1;j<n+1;j++){
			if(big<right_small[j]){
				big=right_small[j];
				search=1;
				where=j;
			}
		}
		for(j=1;j<n+1;j++){
			if(big<left_big[j]){
				big=left_big[j];
				search=2;
				where=j;
			}
		}
		if(search==1){
			double min=number[where];
			int position=where;
			int sum=0;
			for(j=position+1;j<n+1;j++){
				sum+=weight[j];
			}
			if(sum>weight[position]){
				last+=weight[position];
			}
			else{
				last+=sum;
			}
			weight[position]=0;
			number[position]=-1;
			right_small[where]=0;
			for(j=where+1;j<n+1;j++){
				if(left_big[j]>0){
					left_big[j]--;
				}
			}
		}
		else{
			double min=number[where];
			int position=where;
			int sum=0;
			for(j=position-1;j>0;j--){
				sum+=weight[j];
			}
			if(sum>weight[position]){
				last+=weight[position];
			}
			else{
				last+=sum;
			}
			weight[position]=0;
			number[position]=-1;
			left_big[where]=0;
			for(j=1;j<where;j++){
				if(right_small[j]>0){
					right_small[j]--;
				}
			}
		}
		chong-=big*2;
		if(chong==0){
			break;
		}
	}
	printf("%d",last);
}
