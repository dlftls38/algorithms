#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int cnt[200001];
bool cmp(pair<double,int> a, pair<double,int> b){
    if(a.first > b.first){
        return true;
    }
    else if(a.first == b.first){
        if(a.second < b.second){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
vector<int> solution(int N, vector<int> stages) {
    for(auto it : stages){
        cnt[it]++;
    }
    for(int i=1;i<=N;i++){
        cnt[i]+=cnt[i-1];
    }
    vector<pair<double,int> >temp;
    int size = stages.size();
    for(int i=1;i<=N;i++){
        if(cnt[i-1]==size){
            temp.push_back({0,i});
        }
        else{
            temp.push_back({1.0*(cnt[i]-cnt[i-1])/(size-cnt[i-1]),i});   
        }
    }
    sort(temp.begin(),temp.end(),cmp);
    vector<int> answer;
    for(auto it : temp){
        answer.push_back(it.second);
    }
    return answer;
}
