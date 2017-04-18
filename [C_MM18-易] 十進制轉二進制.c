#include <stdio.h>
#include <string.h>

int main()
{
    int num, i;
    while(scanf("%d", &num)!=EOF){
        for(i=7; i>=0; i--)
            printf("%d", num>>i & 1);
        printf("\n");
    }
    return 0;
}