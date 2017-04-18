#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i;
    char word[1000];
    while(gets(word)!=NULL){
        for(i=strlen(word)-1; i>=0; i--){
            if(islower(word[i]))
                printf("%c", toupper(word[i]));
            else if(isupper(word[i]))
                printf("%c", tolower(word[i]));
            else
                printf("%c", word[i]);
        }
        printf("\n");
    }
    return 0;
}