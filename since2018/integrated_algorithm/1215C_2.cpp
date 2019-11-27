#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    string s,t;
    cin>>s>>t;
    vector<int> a,b;
    int i;
    for(i=0;i<n;++i){
        if(s[i]!=t[i]){
            if(s[i]=='a'){
                a.push_back(i+1);
            }
			else{
                b.push_back(i+1);
            }
        }
    }
    if((a.size()+b.size())%2!=0){
        cout<<-1<<endl;
        return 0;
    }
    cout<<a.size()/2+b.size()/2+a.size()%2+b.size()%2<<endl;
    for(i=0;i+1<a.size();i+=2){
        cout<<a[i]<<' '<<a[i+1]<<endl;
    }
    for(i=0;i+1<b.size();i+=2){
        cout<<b[i]<<' '<<b[i+1]<<endl;
    }
    if(a.size()%2==1){
        cout<<a.back()<<' '<<a.back()<<endl;
        cout<<a.back()<<' '<<b.back()<<endl;
    }
    return 0;
}
