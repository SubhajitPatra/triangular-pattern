#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,x;
    printf("set the limit\n");
    scanf("%d",&x);
    for(p=0;p<x;p=p+1){
        for( int i=1;i<=p;i=i+1){
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}
