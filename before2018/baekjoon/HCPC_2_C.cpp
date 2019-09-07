#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int filter_h;
		int filter_w;
		int picture_h;
		int picture_w;
		scanf("%d%d%d%d",&filter_h,&filter_w,&picture_h,&picture_w);
		char filter[60][60]={0};
		char picture[210][210]={0};
		char result[210][210]={0};
		int i,j,k,l;
		for(i=0;i<filter_h;i++){
			scanf("%s",filter[i]);
		}
		for(i=0;i<picture_h;i++){
			scanf("%s",picture[i]);
		}
		for(i=0;i<picture_h;i++){
			scanf("%s",result[i]);
		}
		for(i=0;i<picture_h-filter_h+1;i++){
			for(j=0;j<picture_w-filter_w+1;j++){
				while(picture[i][j]!=result[i][j]){
					for(k=i;k<i+filter_h;k++){
						for(l=j;l<j+filter_w;l++){
							if(filter[k-i][l-j]=='A' && picture[k][l]=='R'){
								picture[k][l]='G';
							}
							else if(filter[k-i][l-j]=='A' && picture[k][l]=='G'){
								picture[k][l]='B';
							}
							else if(filter[k-i][l-j]=='A' && picture[k][l]=='B'){
								picture[k][l]='R';
							}
							else if(filter[k-i][l-j]=='R' && picture[k][l]=='R'){
								picture[k][l]='B';
							}
							else if(filter[k-i][l-j]=='R' && picture[k][l]=='B'){
								picture[k][l]='G';
							}
							else{
								picture[k][l]='R';
							}
						}
					}
				}
			}
		}
		int flag=0;
		for(i=0;i<picture_h;i++){
			for(j=0;j<picture_w;j++){
				if(picture[i][j]!=result[i][j]){
					flag=1;
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		if(flag==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
