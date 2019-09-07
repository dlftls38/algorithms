#include <stdio.h>

#define INT_MAX 2147483647 // 최대 정수

#define TRUE 1

#define FALSE 0

#define MAX_VERTICES 7 //정점의 수

#define INF 1000 //무한대(연결이 없는 경우)

  

int weight[MAX_VERTICES][MAX_VERTICES]={ //네트워크의 인접 행렬

{ 0, 7,INF,INF, 3, 10,INF},

{ 7, 0, 4, 10, 2, 6,INF},

{INF, 4, 0, 2,INF,INF,INF},

{INF, 10, 2, 0, 11, 9, 4},

{ 3, 2,INF, 11, 0,INF, 5},

{ 10, 6,INF, 9,INF, 0,INF},

{INF,INF,INF, 4, 5,INF, 0}};

  

int distance[MAX_VERTICES]; //시작 정점으로부터의 최단 경로 거리

int found[MAX_VERTICES]; //방문한 정점 표시

int path[MAX_VERTICES][MAX_VERTICES]; //최단거리 정점까지 거치는 노드들을 저장

int check[MAX_VERTICES];//한 정점으로 가는 정점을 표시

  

void path_init(int path[][MAX_VERTICES]); //path 인접행렬 초기화

int choose(int distance[],int n,int found[]); // 최단거리에 있는 정점을 찾는 함수

void shortest_path(int start, int n);//최단 경로 알고리즘

  

int main(){

int i,j;

int start;



path_init(path);



printf("시작 정점을 선택하시오 : ");

scanf("%d",&start);

printf("\n");



shortest_path(start,MAX_VERTICES);

  

for(i=0; i<MAX_VERTICES; i++){ //저장된 경로들 출력

printf("%d에서 %d까지의 최단거리 : %d \n",start,i,distance[i]);

printf("%d에서 %d까지의 노 드 : ",start,i);



for(j=0; j<MAX_VERTICES; j++){ 

if(path[i][j]!=INF){

printf("%d->", path[i][j]);//저장된 경로를 출력한다

}

}

printf("%d\n",i);

}

}

  

//path 인접행렬 초기화

void path_init(int path[][MAX_VERTICES]){

int i,j;

for(i=0;i<MAX_VERTICES;i++)

for(j=0;j<MAX_VERTICES;j++)

path[i][j] = INF;

}

// 최단거리에 있는 정점을 찾는 함수

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

//최단 경로 알고리즘

void shortest_path(int start, int n)

{

int i,j,u,w;

for(i=0; i<n; i++){//초기화

distance[i] = weight[start][i];

found[i] = FALSE;

check[i]=1;

path[i][0] = start; 

}

  

found[start] =TRUE;//시작 정점 방문 표시

distance[start] = 0; 

  

for(i=0; i<n-2; i++){

u = choose(distance, n, found);

found[u] = TRUE;



for(w=0; w<n;w++){

if(!found[w]){ 

if(distance[u]+weight[u][w] < distance[w]){ 

if(i==0){//처음에는 인접한 정점에 연결

path[w][check[w]] = u; //갱신된 경로를 경로 배열에 저장

check[w]++;

}

else{ 

for(j=0; j<(check[u]+1); j++){//저장된 만큼 반복

path[w][j] = path[u][j]; //경로를 갱신 

path[w][j+1] = u; //끝부분에 자기자신을 저장

check[w]++;

}

}

distance[w] = distance[u] + weight[u][w];

}

} 

}

}


}

