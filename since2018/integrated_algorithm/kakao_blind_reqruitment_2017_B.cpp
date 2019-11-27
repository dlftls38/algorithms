#include <bits/stdc++.h>

using namespace std;

int solution(string str1, string str2) {
    int str1_len = str1.length();
    int str2_len = str2.length();
    int i,j;
    map<string,int>mp1;
    map<string,int>mp2;
    for(i=0;i<str1_len-1;i++){
        string item;
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i]-='a'-'A';
        }
        if(str1[i+1]>='a' && str1[i+1]<='z'){
            str1[i+1]-='a'-'A';
        }
        if(!(str1[i]>='A' && str1[i]<='Z' && str1[i+1]>='A' && str1[i+1]<='Z')){
            continue;
        }
        item+=str1[i];
        item+=str1[i+1];
        mp1[item]++;
    }
    for(i=0;i<str2_len-1;i++){
        string item;
        if(str2[i]>='a' && str2[i]<='z'){
            str2[i]-='a'-'A';
        }
        if(str2[i+1]>='a' && str2[i+1]<='z'){
            str2[i+1]-='a'-'A';
        }
        if(!(str2[i]>='A' && str2[i]<='Z' && str2[i+1]>='A' && str2[i+1]<='Z')){
            continue;
        }
        item+=str2[i];
        item+=str2[i+1];
        mp2[item]++;
    }
    map<string,int>mp3;
    map<string,int>mp4;
    for(auto it : mp1){
        if(mp2[it.first]>0){
            mp3[it.first]=min(it.second,mp2[it.first]);
            mp4[it.first]=max(it.second,mp2[it.first]);
        }
        else{
            mp4[it.first]=it.second;
        }
    }
    for(auto it : mp2){
        if(mp1[it.first]==0){
            mp4[it.first]=it.second;
        }
    }
    int cross=0;
    for(auto it : mp3){
        cross+=it.second;
    }
    int sum=0;
    for(auto it : mp4){
        sum+=it.second;
    }
    int answer;
    if(cross+sum==0){
        answer=65536;
    }
    else{
        answer=(int)(1.0*cross/sum*65536);
    }
    return answer;
}
int main(){
	solution("E=M*C^2", "e=m*c^2");
}
