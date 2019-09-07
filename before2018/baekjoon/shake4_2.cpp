#include <stdio.h>
#include <algorithm>
struct a
{
    double num1;
    int num2;
    int num3;
};

bool acompare(a lhs, a rhs) { return lhs.num1 > rhs.num1; }
int cost[100];
int satis[100][10];
int num[100];
int max;
int main(){
	a array[1000];
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&cost[i]);
		scanf("%d",&num[i]);
		for(j=0;j<num[i];j++){
			scanf("%d",&satis[i][j]);
		}
	}
	int k=0;
	for(i=0;i<n;i++){
		for(j=0;j<num[i];j++){
			int s1=0;
			for(int q=0;q<j+1;q++){
				s1+=satis[i][q];
			}
			array[k].num2=cost[i]*(j+1);
			array[k].num1=s1/array[k].num2;
			array[k].num3=s1;
			k++;
		}
	}
	std::sort(array, array+1000, acompare);
	k=0;
	for(i=0;i<n;i++){
		for(j=0;j<num[i];j++){
			if(m>array[k].num2){
				max+=array[k].num3;
				m-=array[k].num2;
				k++;
			}
		}
	}
	printf("%d",max);
}
