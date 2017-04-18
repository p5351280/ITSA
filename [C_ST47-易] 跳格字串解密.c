#include <stdio.h>
#include <string.h>
int main(){
    char string[1000];
    int i;
    while(gets(string)!=NULL){
        for(i=0; i<strlen(string); i+=3)
            printf("%c", string[i]);
        printf("\n");
    }
    return 0;
}