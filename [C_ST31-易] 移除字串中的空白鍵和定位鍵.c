#include <stdio.h>
#include <string.h>
int main(){
    char string[1000], *token;
    while(gets(string)!=NULL){
        token=strtok(string, " ");
        while(token!=NULL){
            printf("%s", token);
            token=strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}