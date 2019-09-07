#include <stdio.h>
 
void swap(int* a, int* b){
    
    int temp=*a;
    *a=*b;
    *b=temp;
    
        
}
 
int main() {
    
    int n,i,j;
    int input[1000];
    int input2[1000];
    
    scanf("%d",&n);
    
    for (i=0; i<n; i++){
        
        scanf("%d",&input[i]);
        scanf("%d",&input2[i]);
    }
    if(input[0]==input2[0]){
    	
    	for(i=0; i<n; i++){
        
       	 	for(j=0; j<n-1; j++){
            
          	  if (input2[j]>input2[j+1]){
          	    	swap(&input2[j],&input2[j+1]);
          	    	swap(&input[j],&input[j+1]);
        	    }
       	 	}
   		}
   		for(i=0; i<n; i++){
        
       		for(j=0; j<n-1; j++){
            
         	   	if (input2[j]==input2[j+1] && input[j]> input[j+1]){
         	   		
         	       	swap(&input[j],&input[j+1]);
         	   }
        	}
    	}
	}
	else if(input[0]!=input2[0]){
		
		for(i=0; i<n; i++){
        
       		for(j=0; j<n-1; j++){
            
         	   	if (input[j]>input[j+1]){
         	       	swap(&input[j],&input[j+1]);
         	       	swap(&input2[j],&input2[j+1]);
         	   }
        	}
    	}
    	for(i=0; i<n; i++){
        
       		for(j=0; j<n-1; j++){
            
         	   	if (input[j]==input[j+1] && input2[j]> input2[j+1]){
         	   		
         	       	swap(&input2[j],&input2[j+1]);
         	   }
        	}
    	}
	}
    
    
    for(i=0; i<n; i++){
        
        printf("%d %d\n",input[i],input2[i]);
    }
}
