import java.io.*;
import java.util.*;

public class dfs {
    public static void Dfs(int graph[][],int visited[],int n,int i){
        int j;
	System.out.println(i);
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if((visited[j])==0 && graph[i][j]==1)
            Dfs(graph,visited,n,j);

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of vertices:");
        int n=sc.nextInt();
        int[][] graph=new int[n][n];
        int[] visited=new int[n];
        System.out.println("enter the adjency matrix");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n;i++){
            visited[i]=0;
        }
    Dfs(graph,visited,n,0);
    }
}