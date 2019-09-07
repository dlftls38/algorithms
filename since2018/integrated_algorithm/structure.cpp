struct m {
    int x, y1, y2, z;
    m(int a,int b,int c,int d) : x(a),y1(b),y2(c),z(d){
	}
};
m arr[2 * MAX_N];

m temp{1,2,3,4};
m temp2{};

arr[0]={1,2,3,4};
arr[0].x=1;
arr[0].y1=2;
arr[0].y2=3;
arr[0].z=4;
