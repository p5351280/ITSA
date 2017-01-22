#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main(){
    int num, tmp, i, first=1;
    bool check[100000]={0};
    scanf("%d", &num);
    while(scanf("%d", &tmp)==1)
        check[tmp]=true;
    for(i=1; i<=num; i++){
        if(!check[i]){
            if(first)
                printf("%d", i);
            else
                printf(" %d", i);
            first=0;
        }
    }
    printf("\n");
    return 0;
}
