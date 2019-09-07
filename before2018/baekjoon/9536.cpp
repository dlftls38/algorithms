#include <stdio.h>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
int main(){
	int t;
	char p;
	scanf("%d%c",&t,&p);
	while(t--){
	    vector<string> strings;
	    char a[11000]={0};
	    gets(a);
	    int len=strlen(a);
	    int i;
	    string s;
	    for(i=0;i<len;i++){
	    	if(a[i]!=' '){
	    		s+=a[i];
			}
			else{
				strings.push_back(s);
				s.clear();
			}
		}
		strings.push_back(s);
	    vector<string> i_strings;
	    vector<string>::iterator iter;
	    vector<string>::iterator i_iter;
	    while(1){
	    	char a[11000]={0};
	    	gets(a);
	    	if(strcmp(a,"what does the fox say?")==0){
	    		break;
			}
	    	int len=strlen(a);
		    for(i=0;i<len;i++){
		    	if(strncmp(&a[i],"goes",4)==0){
		    		break;
				}
			}
			i+=5;
			string s;
			for(i=i;i<len;i++){
				s+=a[i];
			}
			i_strings.push_back(s);
		}
		for(iter=strings.begin();iter!=strings.end();++iter){
			int flag=0;
			string q = *iter;
			for(i_iter=i_strings.begin();i_iter!=i_strings.end();++i_iter){
				string w = *i_iter;
				if(q.compare(w)==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				printf("%s ",q.c_str());
			}
		}
	}
}
