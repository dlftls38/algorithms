#include <stdio.h>
 
int dp[3000];
int dp2[3000];
int min(int a){
    
    int minn = 2000;
    int i;
    
    for(i=1; i<7; i++){
        if (dp[a-i] != 0){
        
            if(minn>dp[a-i]){
                minn = dp[a-i];
            }
        }
    }
    
    return minn;
    
}
int min2(int a){
    
    int minn = 2000;
    int i;
    
    for(i=1; i<7; i++){
        if (dp2[a-i] != 0){
        
            if(minn>dp2[a-i]){
                minn = dp2[a-i];
            }
        }
    }
    
    return minn;
    
}
int cost(int city){
    if (city>=7){
        
        dp2[city] = dp[city] + min2(city);
    }
    else{
        
        return dp[city];
    }
}
int main(){
    
    int city;
    int i;
    scanf("%d",&city);
    for(i=1;i<city+1;i++){
        
        scanf("%d",&dp[i]);
    }
    for(i=1;i<7;i++){
        
        dp2[i] = dp[i];
    }
    if (city>=7){
    
    
        for(i=7;i<city+1;i++){
        
            cost(i);
        }
    }
    printf("%d",min2(city+1));
    
    return 0;
}