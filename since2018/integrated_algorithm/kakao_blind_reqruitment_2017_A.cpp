#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> lines) {
    vector<pair<long long,long long>>times;
    for(auto it : lines){
        char input[100]={0};
        strcpy(input,it.c_str());
        char *str = strtok(input," ");
        char time[100]={0};
        char duration[100]={0};
        int cnt=0;
        while(str!=NULL){
            if(cnt==1){
                strcpy(time,str);
            }
            else if(cnt==2){
                strcpy(duration,str);
            }
            cnt++;
            str = strtok(NULL," ");
        }
        double dura=atof(duration);
        int b = dura*1000;
        long long a=(time[11]-48);
        a+=1LL*(time[10]-48)*10;
        a+=1LL*(time[9]-48)*100;
        a+=1LL*(time[7]-48)*1000;
        a+=1LL*(time[6]-48)*10000;
        a+=1LL*(time[4]-48)*10000*6;
        a+=1LL*(time[3]-48)*10000*6*10;
        a+=1LL*(time[1]-48)*10000*6*10*6;
        a+=1LL*(time[0]-48)*10000*6*10*6*10;
        times.push_back({a-b+1,a});
    }
    int i,j;
    int size=lines.size();
    int answer = 0;
    for(i=0;i<size;i++){
        int temp=0;
        for(j=0;j<size;j++){
            if(times[i].second<=times[j].first && times[i].second+999>=times[j].first || 
			times[i].second<=times[j].second && times[i].second+999>=times[j].second || 
			times[i].second>times[j].first && times[i].second+999<times[j].second){
                temp++;
            }
        }
        answer=max(answer,temp);
    }
    return answer;
}
int main(){
	printf("%d",solution({"2016-09-15 20:59:57.421 0.351s", "2016-09-15 20:59:58.233 1.181s", "2016-09-15 20:59:58.299 0.8s", "2016-09-15 20:59:58.688 1.041s", "2016-09-15 20:59:59.591 1.412s", "2016-09-15 21:00:00.464 1.466s", "2016-09-15 21:00:00.741 1.581s", "2016-09-15 21:00:00.748 2.31s", "2016-09-15 21:00:00.966 0.381s", "2016-09-15 21:00:02.066 2.62s"}));
}
