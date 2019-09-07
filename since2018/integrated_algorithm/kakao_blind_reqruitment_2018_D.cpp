#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> food_times, long long k) {
    map<int,int>time_count;
    for(auto it : food_times){
        time_count[it]++;
    }
    int food_count=food_times.size();
    int last_time=0;
    int pos=-1;
    for(auto it : time_count){
        if(1LL*(it.first-last_time)*food_count>k){
            pos=(k%food_count)+1;
            break;
        }
        else{
            k-=1LL*(it.first-last_time)*food_count;
            food_count-=it.second;
            last_time=it.first;
        }
    }
    if(pos==-1){
        return pos;
    }
    else{
        int answer=0;
        food_count=food_times.size();
        for(int i=0;i<food_count;i++){
            if(food_times[i]>last_time){
                answer++;
            }
            if(answer==pos){
                return i+1;
            }
        }
    }
}
