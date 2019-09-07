#include <string>
#include <vector>
#include <map>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> record) {
    int i,j;
    map<string,string>user;
    for(auto it : record){
        char temp[50]={0};
        strcpy(temp,it.c_str());
        char *str = strtok(temp," ");
        char id[50]={0};
        char name[50]={0};
        int cnt=0;
        while(str!=NULL){
            if(strcmp(str,"Leave")==0){
                break;
            }
            if(cnt>0){
                if(cnt==1){
                    strcpy(id,str);
                }
                else{
                    strcpy(name,str);
                }
            }
            cnt++;
            str=strtok(NULL," ");
        }
        user[id]=name;
    }
    vector<string> answer;
    for(auto it : record){
        char temp[50]={0};
        strcpy(temp,it.c_str());
        char *str = strtok(temp," ");
        while(str!=NULL){
            if(strcmp(str,"Change")==0){
            }
            else{
                if(strcmp(str,"Enter")==0){
                    str=strtok(NULL," ");
                    answer.push_back(user[str]+"´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.");
                }
                else{
                    str=strtok(NULL," ");  
                    answer.push_back(user[str]+"´ÔÀÌ ³ª°¬½À´Ï´Ù.");
                }
            }
            break;
        }
    }
    return answer;
}
