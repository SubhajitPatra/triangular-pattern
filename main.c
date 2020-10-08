#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    for(p=0;p<8;p=p+1){
        for( int i=1;i<=p;i=i +1){
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}
