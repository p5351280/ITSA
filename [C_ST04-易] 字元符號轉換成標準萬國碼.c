#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char word;
    while(scanf(" %c", &word)!=EOF){
        printf("%d\n", word);
    }
    return 0;
}