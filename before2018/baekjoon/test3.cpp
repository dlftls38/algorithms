#include <stdio.h>
#include <string.h>

int main(){
	
	int i;
	int j;
	int t;
	int n;
	int g;
	char ml[10000][100];
	int p[g];
	char s[g][100];
	int co[n];
	int pp=0;
	int k=0;
	int result=0;
	scanf("%d", &t);
	for (i=0; i<t; i++){
		
		scanf("%d", &n);
		scanf("%d", &g);
		for (j=0; j<n; j++){
			
			scanf("%s", &ml[j]);
		}
		for (j=0; j<g; j++){
			scanf("%d", p[j]);
			scanf("%s", &s[j]);
		}
		for (i=0; i<n; i++){
			for(j=0; j<strlen(s[i]); j++){
			
				if (ml[i][p[i]-1]==s[i][j]){
					
					co[i]+=1;
				}
			}
		}

		for (i=0; i<n; i++){
			
			if (co[i]==g){
				
				pp++;
				result = i;
			}
			k += co[i];
		}
		
		if (k==0){
			
			printf("YOU KNOW NOTHING");
		}
		
		else if (pp==1) {
			
			printf("%s",ml[result]);
		}
		
		else {
			
			printf("DEAD DRUNK");
		}
	}
	
}
