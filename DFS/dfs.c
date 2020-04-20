//Time complexity O(V+E)
#include<stdio.h>
#include<stdlib.h>
void DFS(int **graph, int *visited, int n, int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if(!visited[j]&&graph[i][j]==1)
            DFS(graph,visited,n,j);
}

 
void main()
{
    int i,j,n;
    printf("Enter number of vertices:");
	scanf("%d",&n);
	int **graph = (int**)malloc(n*sizeof(int *));	//graph in the form of adjency matrix
 	for(i=1;i<=n;i++){
 	graph[i]=(int *) malloc(n*sizeof(int));
 	}
 	 int *visited=(int *)malloc(n*sizeof(int));	//visited array
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&graph[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(graph,visited,n,0);
}
 

