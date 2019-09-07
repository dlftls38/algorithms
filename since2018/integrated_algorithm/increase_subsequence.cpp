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
