#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int num, i;
    while(scanf("%d", &num)!=EOF)
        printf("%c\n", num);
    return 0;
}