#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, j, k, x, y, z, ans[100][100]={{0}}, matrix1[100][100], matrix2[100][100];
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d", matrix1[i]+j);
    scanf("%d%d", &y, &z);
    for(i=0; i<y; i++)
        for(j=0; j<z; j++)
            scanf("%d", matrix2[i]+j);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            for(k=0; k<z; k++)
                ans[i][k]+=matrix1[i][j]*matrix2[j][k];
    for(i=0; i<x; i++){
        for(j=0; j<z; j++){
            printf("%d", ans[i][j]);
            if(j!=z-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}