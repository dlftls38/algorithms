#include <stdio.h>
#include <string.h>
#define INT_MAX 2147483647 // 최대 정수

#define TRUE 1

#define FALSE 0

#define MAX_VERTICES 300 //정점의 수

#define INF 1000 //무한대(연결이 없는 경우)
int weight[MAX_VERTICES][MAX_VERTICES]={}; //네트워크의 인접 행렬

int distance[MAX_VERTICES]; //시작 정점으로부터의 최단 경로 거리

int found[MAX_VERTICES]; //방문한 정점 표시

int path[MAX_VERTICES][MAX_VERTICES]; //최단거리 정점까지 거치는 노드들을 저장

int check[MAX_VERTICES];//한 정점으로 가는 정점을 표시
void path_init(int path[][MAX_VERTICES]); //path 인접행렬 초기화
int choose(int distance[],int n,int found[]); // 최단거리에 있는 정점을 찾는 함수
void shortest_path(int start, int n);//최단 경로 알고리즘
char yeok[300][20];
int yeok_count;
int hwanseung[300];
int main(){
	int n,m,q;
	int i,j,k;
	scanf("%d%d%d",&n,&m,&q);
	for(i=0;i<300;i++){
		for(j=0;j<300;j++){
			if(i!=j){
				weight[i][j]=INF;
			}
		}
	}
	for(i=0;i<n;i++){
		int note[30]={0};
		int note2[30]={0};
		int x;
		scanf("%d",&x);
		for(j=0;j<x;j++){
			char input[20]={0};
			scanf("%s",input);
			int flag=0;
			int point;
			for(k=0;k<yeok_count;k++){
				if(strcmp(yeok[k],input)==0){
					point = k;
					flag=1;
					break;
				}
			}
			if(flag==0){
				strcpy(yeok[yeok_count],input);
				point = yeok_count;
				yeok_count++;
			}
			note[j]=point;
			if(j<x-1){
				scanf("%d",&note2[j]);
			}
		}
		for(j=0;j<x-1;j++){
			weight[note[j]][note[j+1]]=note2[j];
			weight[note[j+1]][note[j]]=note2[j];
		}
	}
	for(i=0;i<m;i++){
		char input[20]={0};
		scanf("%s",input);
		int x;
		scanf("%d",&x);
		for(j=0;j<yeok_count;j++){
			if(strcmp(input,yeok[j])==0){
				hwanseung[j]=x;
				hwanseung[yeok_count]=x;
				weight[yeok_count][j]=x;
				weight[j][yeok_count]=x;
				yeok_count++;
				break;
			}
		}
	}
	for(i=0;i<q;i++){
		int start,end;
		char input[20];
		scanf("%s",input);
		for(j=0;j<yeok_count;j++){
			if(strcmp(input,yeok[j])==0){
				start=j;
				break;
			}
		}
		scanf("%s",input);
		for(j=0;j<yeok_count;j++){
			if(strcmp(input,yeok[j])==0){
				end=j;
				break;
			}
		}
		printf("%d %d\n",start,end);
		path_init(path);
		shortest_path(start,MAX_VERTICES);
		int time=distance[end];
		for(j=0; j<yeok_count; j++){ //저장된 경로들 출력
			if(hwanseung[j]>0){
				
			}
		}
		printf("! %d !\n",time);
	}
}
//path 인접행렬 초기화
void path_init(int path[][MAX_VERTICES]){
	int i,j;
	for(i=0;i<MAX_VERTICES;i++){
		for(j=0;j<MAX_VERTICES;j++){
			path[i][j] = INF;
		}
	}
}

// 최단거리에 있는 정점을 찾는 함수

int choose(int distance[],int n,int found[]){
	int i,min,minpos;
	min = INT_MAX;
	minpos = -1;
	for(i=0;i<n;i++){
		if(distance[i]<min && !found[i]){
			min = distance[i];
			minpos = i;
		}
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

