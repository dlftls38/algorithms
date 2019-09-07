#include <stdio.h>
int main(){
	
	int n;
	int r=0;
	int yeah[10000];
	int q=0;
	int count = 0;
	int count2 = 0;
	int result;
	int result2;
	int switch1 = 0;
	
	

	scanf("%d",&n);
	
	while(q<n){
		
		scanf("%d",&yeah[q]);
		q++;
	}
	
	q=0;
	
	while(r==0){
		
		if (yeah[count] >= yeah[count2] && switch1==0){
			
				result = yeah[count];
		}
		
		if (yeah[count] >= yeah[count2] && switch1==1){
			
				result2 = yeah[count];
		}
		
		count2++;
		
		if (count2 == n){
			
			count2 = 0;
			count++;
		}
		
		if (count == n){
			while (r==0 && switch1 ==0){
				
				if (yeah[q]== result && switch1==0){
					
					yeah[q]=0;
					break;
				}
				q++;
			}
			
			if (switch1==1){
				
				break;
			}
			count = 0;
			switch1++;
		}
	}
	printf("%d",result+result2);
}
