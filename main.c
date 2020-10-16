#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    p=1;
    while(p<=7){
        int q=1;
        while(q<p){
            printf("*");
            q++;
        }
        printf("*\n");
        p++;
    }
    return 0;
}
