#include <stdio.h>

int dp2[3000];
int main(){
    
    int min=2100000;
    int city;
    int i,j;
    scanf("%d",&city);
    for(i=1;i<city+1;i++){
        
        scanf("%d",&dp2[i]);
    }
    if (city>=7){
    
        for(i=7;i<city+1;i++){
        
            for(j=1;j<7;j++){
            	
            	if(dp2[i-j]>0 && min>dp2[i-j]){
            		
            		min = dp2[i-j];
				}
			}
			dp2[i] = dp2[i] + min;
			min = 2100000;
        }
    }
    for(i=0;i<6;i++){
    	
    	if(city-i>0 && dp2[city-i]>0 && min>dp2[city-i]){
    		
    		min = dp2[city-i];
		}
    }
    printf("%d",min);
    
    return 0;
}
