#include<stdio.h>
#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d\n",&n);
    vector<tuple<int,int,string>> v;
     
    //입력
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        int sum=0;
        for(auto x : s)
            if('0'<=x&&x<='9')
                sum+=x-'0';
        v.push_back(make_tuple(s.length(),sum,s));
    }
     
    // sort
    sort(v.begin(),v.end());
     
    //출력
    for(auto x : v){
        printf("%s\n",get<2>(x).c_str());
    }
    return 0;
}

