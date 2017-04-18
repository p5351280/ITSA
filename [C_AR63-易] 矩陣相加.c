#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

int main(){
    int i, j, x, y, ans[100][100]={{0}}, matrix1[100][100], matrix2[100][100];
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d", matrix1[i]+j);
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d", matrix2[i]+j);
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
                ans[i][j]+=matrix1[i][j]+matrix2[i][j];
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d", ans[i][j]);
            if(j!=y-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}