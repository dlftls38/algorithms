#include <stdio.h> 
void merge_sort(long long array[],long long left ,long long right);   //���� �Լ� 
void merge(long long num[],long long left,long long mid,long long right);   //���� �Լ� 

const long long ITEMSIZE = 5;
long long array[ITEMSIZE]; 
int main(void){ 
   int i;
   int n,k;
   scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
   		scanf("%lld",&array[i]);
   }
   merge_sort(array, 0, ITEMSIZE - 1);
	for(i=0;i<n;i++){
   		printf("%lld ",array[i]);
   }
   printf("%lld",array[k-1]);
} 
 
	void merge_sort(long long array[], long long left, long long right) { 
	
   		long long mid;  
 
	   // ������ �� ���� �ʾ��� ��� if �� ����   
	   if(left < right){ 
	   mid = (left + right)/2; 
	   merge_sort(array, left, mid);      //���� ��� ���� 
	   merge_sort(array, mid+1, right);  //������ ��� ���� 
	   merge(array, left, mid, right);   //���ҵ� ��� ���� 
	 
	}
}
void merge(long long array[], long long left, long long mid, long long right){
	long long i, j, k, m;
	i = left;        
	j = mid + 1;  
	k = left;    //��� �迭�� �ε��� 
	
	long long tempArray[ITEMSIZE]; 
 
	//left���� mid ������ ��ϰ� mid+1���� right������ ����� ���� ���ϴ� �κ� 
	while (i <= mid && j <= right) {
   	
    	if (array[i] < array[j]){   //left index ���� right index ������ ������ left index ���� ��� result�� ���� 
			tempArray[k] = array[i]; 
    		i++; 
    	}
		else{  //�ƴ϶�� right index ���� ��� result�� ���� 
       		tempArray[k] = array[j]; 
       		j++; 
    	} 
     	k++; 
   	} 
 
   // left ����� ���� �� ó���Ǿ��µ� right ����� index�� ���� �������� ��� 
   // right index�� ���������� ��� result�� ���� 
	if (i > mid){
    	for (m = j; m <= right; m++){
    		tempArray[k] = array[m];      
    		k++; 
    	} 
   	}
	else {                    // left ����� index�� ���� �������� ��� left index�� ���������� ��� result�� ����  
    	for (m = i; m <= mid; m++){  
    		tempArray[k] = array[m];    
       		k++; 
     	} 
   } 
    
   for(m = left; m <= right; m++){ 
    	array[m] = tempArray[m]; 
   }
}

