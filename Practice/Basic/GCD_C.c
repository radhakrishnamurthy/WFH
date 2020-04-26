#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int gcd(long long int x,long long int y){
    if(y!=0){
        return gcd(y,x%y);
    }
    else{
        return x;
    }
}

int main() {

    long long int x,y;
    scanf("%lld %lld",&x,&y);
    long long int r=gcd(x,y);
    printf("%lld",r);/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

