#include <stdio.h>
#include <stdlib.h>
#define INT unsigned int 
#define llint long long int
INT inverse(INT a, INT m) {
	llint r, r1, r2, t, t1, t2, q;
	r1=a;
	r2=m;
	t1=0;
    t2=1;
	while (r1!=1){
        llint cnt=0, temp_r2=r2, temp_r1=r1;
        while(temp_r2>=temp_r1){
            cnt++;
            temp_r2-=temp_r1;
        }
		q=cnt;
		r=r2-r1*q;
		t=t1-t2*q;
		r2=r1;
		r1=r;
		t1=t2;
		t2=t;
	}
	if (t2 < 0){
        t2 = t2 + m;
    }
	return t2;
}
int main(){
	printf("%d",inverse(31,576));
}
