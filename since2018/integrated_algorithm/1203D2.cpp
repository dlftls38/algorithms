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
            j = pi[j - 1];        //����ġ�� �Ͼ ���
        if (b[i] == b[j])
            pi[i] = ++j;        //prefix�� ���� ����ġ��ŭ pi�� �����ݴϴ�.
    }
}
void getpi2(){
    int j = b.length()-1;
    for (int i = b.length()-2; i >=0; i--){
        while (j < b.length()-1 && b[i] != b[j])    
            j = pi2[j + 1];        //����ġ�� �Ͼ ���
        if (b[i] == b[j])
            pi2[i] = --j;        //prefix�� ���� ����ġ��ŭ pi�� �����ݴϴ�.
    }
}
void kmp(){
    int j = 0;
    for (int i = 0; i < a.length(); i++){
        while (j > 0 && a[i] != b[j])        //���� j��ŭ ã�Ҵµ� �̹��� ���ϴ� ���ڰ� �ٸ� ���
            j = pi[j - 1];        //���ڿ� B�� failure function ���� ���� �񱳸� ���ݴϴ�.
        if (a[i] == b[j]){            //���ϴ� ���ڰ� ���� ���
            if (j == b.length() - 1){    //���ڿ� B�� ���� Ž���Ͽ��� ������ �信 ��ġ�� �־��ݴϴ�.
                res.push_back(i - b.length() + 1);
                j = pi[j];    //���� Ž���� ���Ͽ� �̹����� failure function ���� ���� �񱳸� ���ݴϴ�.
            }
            else
                j++;    //���ڿ� B�� ���� �ܾ �����ݴϴ�.
        }
    }
}
void kmp2(){
    int j = b.length()-1;
    for (int i = a.length()-1; i >=0; i--){
    	printf("%d\n",i);
        while (j < b.length()-1 && a[i] != b[j])        //���� j��ŭ ã�Ҵµ� �̹��� ���ϴ� ���ڰ� �ٸ� ���
            j = pi2[j + 1];        //���ڿ� B�� failure function ���� ���� �񱳸� ���ݴϴ�.
        if (a[i] == b[j]){            //���ϴ� ���ڰ� ���� ���
            if (j == b.length() - 1){    //���ڿ� B�� ���� Ž���Ͽ��� ������ �信 ��ġ�� �־��ݴϴ�.
                res2.push_back(i + b.length() - 1);
                j = pi2[j];    //���� Ž���� ���Ͽ� �̹����� failure function ���� ���� �񱳸� ���ݴϴ�.
            }
            else
                j--;    //���ڿ� B�� ���� �ܾ �����ݴϴ�.
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
