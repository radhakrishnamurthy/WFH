import java.io.*;
import java.util.*;
public class bfs {
    static int f=0,r=-1;

    public static void Bfs(int g[][], int q[], int v,int n,int visited[]) {
        int i;
     for(i=1; i<=n; i++){
     
         if(g[v][i]==1 && visited[i]==0)
             q[++r] = i;
         if(f <= r) {
             visited[q[f]] = 1;
             Bfs(g,q,q[f++],n,visited);
         }
        }
    }
    
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int vertex,n,i,j;
        System.out.println("\n Enter the number of vertices:");
        n=sc.nextInt();
        int [][] graph=new int[n][n];
        int [] visited= new int[n];	//visited array
        int [] queue= new int[n];	//queue to store the visited nodes
        for( i=1; i <= n; i++) {
            queue[i] = 0;
            visited[i] = 0;
        }
     
     printf("\n Enter adjency matrix:\n");
     for(i=1; i<=n; i++) {
         for(j=1;j<=n;j++) {
             graph[i][j]=sc.nextInt();
         }
     }
     
     System.out.println("\n Enter the starting vertex:");
     vertex=sc.nextInt();
     Bfs(graph,queue,vertex,n,visited);
     System.out.println("\n search order: \n");
     
     for(i=1; i <= n; i++) {
         if(visited[i])
             printf("%d\t", i);
         else {
             printf("\n Bfs is not possible.");
             break;
         }
    }
    }
}