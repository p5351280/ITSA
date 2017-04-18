#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int i, j, x, y;
    scanf("%d%d", &y, &x);
    for(i=0; i<x; i++){
        for(j=0; j<y; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}