//Time complexity O(V+E)
#include<stdio.h>
 int Graph[50][50],visited[50],n;    //n is no of vertices and graph is stored in array G[50][50]
void DFS(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if(!visited[j]&&Graph[i][j]==1)
            DFS(j);
}

 
void main()
{
    int i,j;
    printf("Enter number of vertices:");
	scanf("%d",&n);
	if(n>50){
		do{
			printf("Enter a value less than 50\n");
			scanf("%d",&n);
			if(n<50)
				break;
		}while(1);
	}
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&Graph[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
}
 

