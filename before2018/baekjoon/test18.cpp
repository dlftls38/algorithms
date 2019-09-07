#include <stdio.h>

#define INT_MAX 2147483647 // �ִ� ����

#define TRUE 1

#define FALSE 0

#define MAX_VERTICES 7 //������ ��

#define INF 1000 //���Ѵ�(������ ���� ���)

  

int weight[MAX_VERTICES][MAX_VERTICES]={ //��Ʈ��ũ�� ���� ���

{ 0, 7,INF,INF, 3, 10,INF},

{ 7, 0, 4, 10, 2, 6,INF},

{INF, 4, 0, 2,INF,INF,INF},

{INF, 10, 2, 0, 11, 9, 4},

{ 3, 2,INF, 11, 0,INF, 5},

{ 10, 6,INF, 9,INF, 0,INF},

{INF,INF,INF, 4, 5,INF, 0}};

  

int distance[MAX_VERTICES]; //���� �������κ����� �ִ� ��� �Ÿ�

int found[MAX_VERTICES]; //�湮�� ���� ǥ��

int path[MAX_VERTICES][MAX_VERTICES]; //�ִܰŸ� �������� ��ġ�� ������ ����

int check[MAX_VERTICES];//�� �������� ���� ������ ǥ��

  

void path_init(int path[][MAX_VERTICES]); //path ������� �ʱ�ȭ

int choose(int distance[],int n,int found[]); // �ִܰŸ��� �ִ� ������ ã�� �Լ�

void shortest_path(int start, int n);//�ִ� ��� �˰���

  

int main(){

int i,j;

int start;



path_init(path);



printf("���� ������ �����Ͻÿ� : ");

scanf("%d",&start);

printf("\n");



shortest_path(start,MAX_VERTICES);

  

for(i=0; i<MAX_VERTICES; i++){ //����� ��ε� ���

printf("%d���� %d������ �ִܰŸ� : %d \n",start,i,distance[i]);

printf("%d���� %d������ �� �� : ",start,i);



for(j=0; j<MAX_VERTICES; j++){ 

if(path[i][j]!=INF){

printf("%d->", path[i][j]);//����� ��θ� ����Ѵ�

}

}

printf("%d\n",i);

}

}

  

//path ������� �ʱ�ȭ

void path_init(int path[][MAX_VERTICES]){

int i,j;

for(i=0;i<MAX_VERTICES;i++)

for(j=0;j<MAX_VERTICES;j++)

path[i][j] = INF;

}

// �ִܰŸ��� �ִ� ������ ã�� �Լ�

int choose(int distance[],int n,int found[]){

int i,min,minpos;

min = INT_MAX;

minpos = -1;

  

for(i=0;i<n;i++)

if(distance[i]<min && !found[i]){

min = distance[i];

minpos = i;

}

return minpos;

}

//�ִ� ��� �˰���

void shortest_path(int start, int n)

{

int i,j,u,w;

for(i=0; i<n; i++){//�ʱ�ȭ

distance[i] = weight[start][i];

found[i] = FALSE;

check[i]=1;

path[i][0] = start; 

}

  

found[start] =TRUE;//���� ���� �湮 ǥ��

distance[start] = 0; 

  

for(i=0; i<n-2; i++){

u = choose(distance, n, found);

found[u] = TRUE;



for(w=0; w<n;w++){

if(!found[w]){ 

if(distance[u]+weight[u][w] < distance[w]){ 

if(i==0){//ó������ ������ ������ ����

path[w][check[w]] = u; //���ŵ� ��θ� ��� �迭�� ����

check[w]++;

}

else{ 

for(j=0; j<(check[u]+1); j++){//����� ��ŭ �ݺ�

path[w][j] = path[u][j]; //��θ� ���� 

path[w][j+1] = u; //���κп� �ڱ��ڽ��� ����

check[w]++;

}

}

distance[w] = distance[u] + weight[u][w];

}

} 

}

}


}

