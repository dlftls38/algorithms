#include <bits/stdc++.h>

using namespace std;

string solution(int n, int t, int m, vector<string> timetable) {
    int crew_size = timetable.size();
    int i,j;
    vector<int>crew;
    for(auto time : timetable){
        int crew_time=time[4]-48;
        crew_time+=(time[3]-48)*10;
        crew_time+=(time[1]-48)*10*6;
        crew_time+=(time[0]-48)*10*6*10;
        crew.push_back(crew_time);
        //if(crew_time==1440)exit(1);
    }
    sort(crew.begin(),crew.end());
    vector<int>bus;
    int bus_time=540;
    for(i=0;i<n;i++){
        bus.push_back(bus_time);
        bus_time+=t;
    }
    int temp_ans=0;
    int cur_bus=0;
    int cur_crew=0;
    int cur_passenger=0;
    for(i=0;i<10000;i++){
        if(bus[cur_bus]<i){
            cur_bus++;
            cur_passenger=0;
        }
        if(cur_bus==n)break;
        for(;cur_crew<crew_size && i>=crew[cur_crew] && m>cur_passenger;cur_crew++,cur_passenger++){
            
        }
        if(cur_passenger<m){
            temp_ans=i;
        }
    }
    string answer = "00:00";
    int  hour = temp_ans/60;
    int  minute = temp_ans%60;
    answer[0]=hour/10+48;
    answer[1]=hour%10+48;
    answer[3]=minute/10+48;
    answer[4]=minute%10+48;
    if(temp_ans>bus[n-1]){
    	string answer2 = "00:00";
	    hour = bus[n-1]/60;
	    minute = bus[n-1]%60;
	    answer2[0]=hour/10+48;
	    answer2[1]=hour%10+48;
	    answer2[3]=minute/10+48;
	    answer2[4]=minute%10+48;
    	return 
	}
    return answer;
}
int main(){
	//printf("%s",solution(1,1,5,{"08:00", "08:01", "08:02", "08:03"}).c_str());
	printf("%s",solution(10,50,1,{"05:00", "08:01", "11:02", "15:03", 
	"18:04", "21:05", "00:01", "00:59", "23:59", "20:00"}).c_str());
}
