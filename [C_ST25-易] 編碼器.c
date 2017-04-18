#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int shift, kind, i;
    char s[1000000];
    scanf("%d%d ", &shift, &kind);
    printf("%d\n%d\n", shift, kind);
    switch(kind){
        case 0:{
            while(gets(s)!=NULL){
                for(i=0; i<strlen(s); i++){
                    if(isupper(s[i])){
                        if(s[i]+shift>='A' && s[i]+shift<='Z')
                            printf("%c", s[i]+shift);
                        else if(s[i]+i>'Z')
                            printf("%c", s[i]-26+shift);
                        else
                            printf("%c", s[i]+26+shift);
                    }
                    else if(islower(s[i])){
                        if(s[i]+shift>='a'&&s[i]+shift<='z')
                            printf("%c", s[i]+shift);
                        else if(s[i]+shift>'z')
                            printf("%c", s[i]-26+shift);
                        else
                            printf("%c", s[i]+26+shift);
                    }
                    else
                        printf("%c", s[i]);
                }
                printf("\n");
            }
            break;
        }
        case 1:{
            while(gets(s)!=NULL){
                for(i=0; i<strlen(s); i++){
                    if(isupper(s[i])){
                        if(s[i]-shift>='A'&&s[i]-shift<='Z')
                            printf("%c", s[i]-shift);
                        else if(s[i]-shift>'Z')
                            printf("%c", s[i]-26-shift);
                        else
                            printf("%c", s[i]+26-shift);
                    }
                    else if(islower(s[i])){
                        if(s[i]-shift>='a'&&s[i]-shift<='z')
                            printf("%c", s[i]-shift);
                        else if(s[i]-shift>'z')
                            printf("%c", s[i]-26-shift);
                        else
                            printf("%c", s[i]+26-shift);
                    }
                    else
                        printf("%c", s[i]);
                }
                printf("\n");
            }
            break;
        }
    }
    return 0;
}