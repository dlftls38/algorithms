#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string a,b;
int len_a,len_b;
vector<int>pi(200001,0);
vector<int>res;
vector<int>pi2(200001,0);
vector<int>res2;
void getpi(){
    int j = 0;
    for (int i = 1; i < b.length(); i++){
        while (j > 0 && b[i] != b[j])    
            j = pi[j - 1];        //불일치가 일어날 경우
        if (b[i] == b[j])
            pi[i] = ++j;        //prefix가 같은 가중치만큼 pi를 정해줍니다.
    }
}
void getpi2(){
    int j = b.length()-1;
    for (int i = b.length()-2; i >=0; i--){
        while (j < b.length()-1 && b[i] != b[j])    
            j = pi2[j + 1];        //불일치가 일어날 경우
        if (b[i] == b[j])
            pi2[i] = --j;        //prefix가 같은 가중치만큼 pi를 정해줍니다.
    }
}
void kmp(){
    int j = 0;
    for (int i = 0; i < a.length(); i++){
        while (j > 0 && a[i] != b[j])        //현재 j만큼 찾았는데 이번에 비교하는 문자가 다른 경우
            j = pi[j - 1];        //문자열 B를 failure function 이후 부터 비교를 해줍니다.
        if (a[i] == b[j]){            //비교하는 문자가 같은 경우
            if (j == b.length() - 1){    //문자열 B를 전부 탐색하였기 때문에 답에 위치를 넣어줍니다.
                res.push_back(i - b.length() + 1);
                j = pi[j];    //다음 탐색을 위하여 이번에도 failure function 이후 부터 비교를 해줍니다.
            }
            else
                j++;    //문자열 B의 다음 단어를 비교해줍니다.
        }
    }
}
void kmp2(){
    int j = b.length()-1;
    for (int i = a.length()-1; i >=0; i--){
    	printf("%d\n",i);
        while (j < b.length()-1 && a[i] != b[j])        //현재 j만큼 찾았는데 이번에 비교하는 문자가 다른 경우
            j = pi2[j + 1];        //문자열 B를 failure function 이후 부터 비교를 해줍니다.
        if (a[i] == b[j]){            //비교하는 문자가 같은 경우
            if (j == b.length() - 1){    //문자열 B를 전부 탐색하였기 때문에 답에 위치를 넣어줍니다.
                res2.push_back(i + b.length() - 1);
                j = pi2[j];    //다음 탐색을 위하여 이번에도 failure function 이후 부터 비교를 해줍니다.
            }
            else
                j--;    //문자열 B의 다음 단어를 비교해줍니다.
        }
    }
}
int main(){
	string remainder;
	getline(cin,a);
	getline(cin,b);
	len_a=a.length();
	len_b=b.length();
	getpi();
	for(int i=0;i<10;i++){
		printf("%d ",pi[i]);
	}
	printf("\n");
	kmp();
	getpi2();
	for(int i=0;i<10;i++){
		printf("%d ",pi2[i]);
	}
	printf("\n");
	//kmp2();
	int size2=res2.size();
	for(int i=0;i<size2;i++){
		printf("%d ",res2[i]);
	}
	return 0;
	int size=res.size();
	int ans=0;
	for(int i=0;i<size;i++){
		ans=max(ans,res[i]);
		ans=max(ans,len_a-(res[i]+len_b));
	}
	printf("%d",ans);
}
