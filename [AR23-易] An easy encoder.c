#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[10000];
    while(fgets(s, 10000, stdin)){
        int i;
        for(i=0; i<strlen(s); i++){
            if(isalpha(s[i])){
                if((s[i]>='A' && s[i]+13<='Z') || (s[i]>='a' && s[i]+13<='z'))
                    printf("%c", s[i]+13);
                else
                    printf("%c", s[i]+13-26);
            }
            else
                printf("%c", s[i]);
        }
    }
    return 0;
}
