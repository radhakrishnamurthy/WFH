#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,c=0;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    c=n-1;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            printf("%d ",a[j][c]);
        }
        c=c-1;
        printf("\n");
    }/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

