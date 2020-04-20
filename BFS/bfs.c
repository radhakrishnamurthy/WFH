//Time complexity O(V+E)
#include<stdio.h>
#include<stdlib.h>
int f=0,r=-1;

void bfs(int **g, int*q, int v,int n,int *visited) {
	int i;
 for(i=1; i<=n; i++){
 
 	if(g[v][i] && !visited[i])
 		q[++r] = i;
 	if(f <= r) {
 		visited[q[f]] = 1;
 		bfs(g,q,q[f++],n,visited);
 	}
	}
}

int main() {
 int vertex,n,i,j;
 printf("\n Enter the number of vertices:");
 scanf("%d", &n);
 int **graph = (int**)malloc(n*sizeof(int *));	//graph in the form of adjency matrix
 for(i=1;i<=n;i++){
 	graph[i]=(int *) malloc(n*sizeof(int));
 }
 int *visited=(int *)malloc(n*sizeof(int));	//visited array
 int *queue=(int *)malloc(n*sizeof(int));	//queue to store the visited nodes
 for( i=1; i <= n; i++) {
 	queue[i] = 0;
 	visited[i] = 0;
 }
 
 printf("\n Enter adjency matrix:\n");
 for(i=1; i<=n; i++) {
 	for(j=1;j<=n;j++) {
 		scanf("%d", &graph[i][j]);
 	}
 }
 
 printf("\n Enter the starting vertex:");
 scanf("%d", &vertex);
 bfs(graph,queue,vertex,n,visited);
 printf("\n search order: \n");
 
 for(i=1; i <= n; i++) {
 	if(visited[i])
 		printf("%d\t", i);
 	else {
 		printf("\n Bfs is not possible.");
 		break;
 	}
}
 return 0;
}
