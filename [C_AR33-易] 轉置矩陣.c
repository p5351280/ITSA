#include <stdio.h>
#include <string.h>
int main(){
    int i, j, x, y, num[1000][1000];
    while(scanf("%d%d", &x, &y)!=EOF){
        if(x==0&&y==0)
            break;
        for(i=0; i<x; i++)
            for(j=0; j<y; j++)
                scanf("%d", num[i]+j);
        for(i=0; i<y; i++){
            for(j=0; j<x; j++){
                printf("%d", num[j][i]);
                if(j!=x-1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}