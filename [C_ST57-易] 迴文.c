#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void rev(char *s, int len){
    int i;
    char temp;
    for(i=0; i<len/2; i++){
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
}
int main(){
    char s[1000], old[1000], len;
    while(gets(s)!=NULL){
        strcpy(old, s);
        rev(s, strlen(s));
        if(strcmp(old, s))
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}