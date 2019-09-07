#include <stdio.h> 
void merge_sort(long long array[],long long left ,long long right);   //분할 함수 
void merge(long long num[],long long left,long long mid,long long right);   //병합 함수 

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
 
	   // 분할이 다 되지 않았을 경우 if 문 실행   
	   if(left < right){ 
	   mid = (left + right)/2; 
	   merge_sort(array, left, mid);      //왼쪽 블록 분할 
	   merge_sort(array, mid+1, right);  //오른쪽 블록 분할 
	   merge(array, left, mid, right);   //분할된 블록 병합 
	 
	}
}
void merge(long long array[], long long left, long long mid, long long right){
	long long i, j, k, m;
	i = left;        
	j = mid + 1;  
	k = left;    //결과 배열의 인덱스 
	
	long long tempArray[ITEMSIZE]; 
 
	//left부터 mid 까지의 블록과 mid+1부터 right까지의 블록을 서로 비교하는 부분 
	while (i <= mid && j <= right) {
   	
    	if (array[i] < array[j]){   //left index 값이 right index 값보다 작으면 left index 값을 결과 result에 복사 
			tempArray[k] = array[i]; 
    		i++; 
    	}
		else{  //아니라면 right index 값을 결과 result에 복사 
       		tempArray[k] = array[j]; 
       		j++; 
    	} 
     	k++; 
   	} 
 
   // left 블록의 값은 다 처리되었는데 right 블록의 index가 아직 남아있을 경우 
   // right index를 순차적으로 결과 result에 복사 
	if (i > mid){
    	for (m = j; m <= right; m++){
    		tempArray[k] = array[m];      
    		k++; 
    	} 
   	}
	else {                    // left 블록의 index가 아직 남아있을 경우 left index를 순차적으로 결과 result에 복사  
    	for (m = i; m <= mid; m++){  
    		tempArray[k] = array[m];    
       		k++; 
     	} 
   } 
    
   for(m = left; m <= right; m++){ 
    	array[m] = tempArray[m]; 
   }
}

