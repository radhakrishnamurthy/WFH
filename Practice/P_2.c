#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int t=0;
    for(int i=0;i<n;i++){
        t++;
        if(i%2==0)
            for(int j=0;j<=n;j++){
                if(j==n)
                    printf("%d",++t);
                else
                    printf("%d ",t);
            }
        else{
            for(int j=0;j<=n;j++){
                if(j==0)
                    printf("%d ",t--);
                else
                    printf("%d ",t);
        }
    }
        printf("\n");
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

