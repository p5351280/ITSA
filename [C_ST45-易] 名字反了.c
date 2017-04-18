#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int i, count;
    char name[10000];
    scanf("%d", &count);
    while(count--){
        scanf("%s", name);
        for(i=strlen(name)-1; i>=0; i--){
            if(i==strlen(name)-1)
                printf("%c", toupper(name[i]));
            else
                printf("%c", tolower(name[i]));
        }
        printf("\n");
    }
    return 0;
}