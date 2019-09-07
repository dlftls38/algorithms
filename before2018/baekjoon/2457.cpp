#include <stdio.h>
#include <tuple>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	vector<tuple<int,int,int,int>> v;
	int n;
	scanf("%d",&n);
	int i;
	int top=0;
	for(i=0;i<n;i++){
		int q,w,e,r;
		scanf("%d %d %d %d",&q,&w,&e,&r);
		if(e<=2 || q>=12){
		}
		else{
			v.push_back(make_tuple(q,w,e,r));
			top++;
		}
	}
	sort(v.begin(),v.end());
	int end1=0;
	int end2=0;
	int count=1;
	int now1=0;
	int now2=0;
	int flag=0;
	for(auto x : v){
		if(get<0>(x)<3 || get<0>(x)==3 && get<1>(x)==1){
			if(end1<get<2>(x) || end1==get<2>(x) && end2<get<3>(x)){
				end1=get<2>(x);
				end2=get<3>(x);
				now1=get<2>(x);
				now2=get<3>(x);	
			}
		}
		else{
			break;
		}
	}
	int q=0;
	if(top==1){
		count--;
	}
	for(auto x : v){
	//	printf("%d ",count);
		if((get<0>(x)==end1 && get<1>(x)<=end2) || get<0>(x)<end1){
			if(now1 ==get<2>(x) && now2<get<3>(x) || now1<get<2>(x)){
				now1=get<2>(x);
				now2=get<3>(x);
			}
		}
		else{
			if(get<0>(x)>now1 || get<0>(x)==now1 && get<1>(x)>now2){
				flag=1;
				break;
			}
			else{
				if(get<2>(x)<now1 || (get<2>(x)==now1 && get<3>(x)<=now2)){
					count++;
					end1=now1;
					end2=now2;
				}
				else{
					count++;
					end1=now1;
					end2=now2;
					now1=get<2>(x);
					now2=get<3>(x);
				}
			}
		}
	//	printf("%d\n",count);
		if(get<2>(x)==12){
			count++;
			break;
		}
    }
    if(now1<12){
    	flag=1;
	}
	if(flag==1){
		printf("0");
	}
	else{
		printf("%d",count);
	}
}
