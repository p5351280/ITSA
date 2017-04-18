#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char old[1000];
    while(gets(old)){
        int i, j, count=1;
        for(i=0; i<strlen(old); i++){
            if(old[i]==old[i+1])
                count++;
            else{
                printf("%c%d", old[i], count);
                count=1;
            }
        }
        printf("\n");
        
    }
    return 0;
}