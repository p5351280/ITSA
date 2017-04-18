#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char old[1000];
    while(gets(old)){
        char new[1000], replace[1000], word[1000];
        gets(word);
        gets(replace);
        int i, j=0, k=0, flag=0, check;
        for(i=0;;){
            check=strncmp(old+i, word, strlen(word));
            if(!check){
                for(j=0; j<strlen(replace); j++)
                    new[flag++] = replace[j];
                i+=strlen(word);
            }
            else
                new[flag++] = old[i++];
            if(old[i]=='\0'){
                new[flag]='\0';
                break;
            }
        }
        printf("%s\n", new);
    }
    return 0;
}