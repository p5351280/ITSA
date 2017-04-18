#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int num, i;
    char word[1000];
    scanf("%d ", &num);
    while(num--){
        scanf("%s", word);
        for(i=strlen(word)-1; i>=0; i--)
            printf("%c", word[i]);
        printf("\n");
    }
    return 0;
}