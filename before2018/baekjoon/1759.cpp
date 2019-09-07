#include <cstdio>
#include <algorithm>
int l,c;
char word[15];
void search(char imsi[15],int position,int wn){
	int i,count=0,count2=0;
	if(position==l){
		for(i=0;i<c;i++){
			if(imsi[i]=='a' || imsi[i]=='e' || imsi[i]=='i' || imsi[i]=='o' || imsi[i]=='u'){
				count++;
			}
			else{
				count2++;
			}
		}
		if(count>=1 && count2>=2) printf("%s\n",imsi);
		return;
	}
	for(i=wn;i<c;i++){
		imsi[position]=word[i];
		search(imsi,position+1,i+1);
	}
}
int main(){
	int i,j,top=0;
	char w[35]={0},ww[15]={0};
	scanf("%d%d",&l,&c);
	gets(w);
	gets(w);
	for(i=0;i<35;i++){
		if(97<=w[i] && w[i]<=122){
			word[top++]=w[i];
		}
	}
	std::sort(word,word+c);
	search(ww,0,0);
}
// a c i s t w
