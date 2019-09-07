#include <stdio.h>

int number[1000000];

void q_sort(int numbers[], int left,int right){
	
	if(left==right)return;
	int pivot, l_hold, r_hold;
	l_hold = left;
	r_hold = right;
	pivot = numbers[left];
	
	while (left<right){
		
		while((numbers[right]>=pivot) && (left<right))
		right--;
		if(left==right){
			
			numbers[left]= numbers[right];
			left++;
		}
		while((numbers[left]<=pivot) && (left<right))
		left++;
		if(left!=right){
			
			numbers[right] = numbers[left];
			right--;
		}
	}
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if(left<pivot){
		
		q_sort(numbers,left,pivot-1);
	}
	if(right>pivot)
		
		q_sort(numbers,pivot+1,right);
			
}
 
void swap(int* a, int* b){
    
    int temp=*a;
    *a=*b;
    *b=temp;
    
        
}
 
int main() {
    
    int n,i;
    
    scanf("%d",&n);
    
    for (i=0; i<n; i++){
    	
    	scanf("%d",&number[i]);
	}
	
	q_sort(number,0,n-1);
	 
    for (i=0 ;i<n; i++){
    	
    	printf("%d ",number[i]);
	}
}
