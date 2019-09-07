#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int a[200001]={0};
	int i;
	int leftmost=0;
	int tail_number=0;
	int count=0;
	string s="";
    scanf("%d",&n);
    int rightmost=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++){
		if(a[leftmost]==a[rightmost] && a[leftmost]>tail_number){
			int start=a[leftmost];
			int cou=0;
			for(int j=leftmost+1;j<rightmost+1;j++){
				if(start<a[j]){
					start=a[j];
					cou++;
				}
				else{
					break;
				}
			}
			int start2=a[rightmost];
			int cou2=0;
			for(int j=rightmost-1;j>leftmost-1;j--){
				if(start2<a[j]){
					start2=a[j];
					cou2++;
				}
				else{
					break;
				}
			}
			count++;
			if(cou>=cou2){
				tail_number=a[leftmost];
				s+="L";
				leftmost++;
			}
			else{
				tail_number=a[rightmost];
				s+="R";
				rightmost--;
			}
		}
		if(min(a[leftmost],a[rightmost])>tail_number){
			tail_number=min(a[leftmost],a[rightmost]);
			count++;
			if(min(a[leftmost],a[rightmost])==a[leftmost]){
				s+="L";
				leftmost++;
			}
			else{
				s+="R";
				rightmost--;
			}
		}
		else if(max(a[leftmost],a[rightmost])>tail_number){
			tail_number=max(a[leftmost],a[rightmost]);
			count++;
			if(max(a[leftmost],a[rightmost])==a[leftmost]){
				s+="L";
				leftmost++;
			}
			else{
				s+="R";
				rightmost--;
			}
		}
	}
	printf("%d\n%s",count,s.c_str());
}
